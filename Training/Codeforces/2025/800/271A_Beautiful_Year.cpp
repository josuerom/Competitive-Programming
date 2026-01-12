/**
 *  author:  josuerom
 *  created: 11/03/23 22:12:16
**/
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
   int n;
   std::cin >> n;
   bool flag = true;
   while (flag) {
      n++;
      unordered_set<int> set;
      string s = std::to_string(n);
      for (char c : s) {
        set.insert(c - '0');
      }
      if (set.size() == 4) {
         flag = false;
      }
   }
   cout << n << '\n';
   return 0;
}