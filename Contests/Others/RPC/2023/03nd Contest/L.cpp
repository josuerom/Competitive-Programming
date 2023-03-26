/**
 *  author:  josuerom
 *  created: 25/03/23 17.58:43
**/
#include <bits/stdc++.h>
using namespace std;

struct Row{
   vector<size_t> row;
   int index;
};

void printTriangle(Row & triangle) {
   for(auto & num : triangle.row){
      cout << num << " ";
   }
   cout << endl;
}

int generateTree(Row & triangle, unordered_map<size_t , size_t> & mappedInts, size_t sNumber){
   bool numberFound = false;
   bool add = true;
   while(!numberFound){
      ++triangle.index;
      vector<size_t> newLine;
      newLine.emplace_back(1);

      for(size_t i = 1; i < triangle.row.size(); ++i){
         size_t sum = triangle.row[i - 1] + triangle.row[i];
         if(sum > 1000000000){
            add = false;
            break;
         }
         newLine.emplace_back(sum);
         if(triangle.row.size() != 2 && mappedInts.find(newLine[newLine.size() - 1]) == mappedInts.end())
           mappedInts[newLine[newLine.size() - 1]] = triangle.index;
         if(sum == sNumber)
            numberFound = true;
      }
      if(newLine.size() == 2){
         triangle.row = newLine;
         return (int)sNumber + 1;
      }
      if(add) newLine.emplace_back(1);
      triangle.row = newLine;
   }
   return triangle.index;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   Row triangle;
   triangle.row = {1,2,1};
   triangle.index = 3;
   unordered_map<size_t , size_t> mappedInts;
   mappedInts[1] = 1;
   mappedInts[2] = 3;

   int requests = 0;
   cin >> requests;
   while(requests){
      int cell = 0;
      cin >> cell;
      auto res = mappedInts.find(cell);
      if(res == mappedInts.end() && triangle.row.size() != 2)
         cout << generateTree(triangle, mappedInts, cell) << endl;
      else if(res == mappedInts.end() && triangle.row.size() == 2)
         cout << cell + 1 << endl;
      else
         cout << mappedInts[cell] << endl;
      --requests;
   }
   return 0;
}