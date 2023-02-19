/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int n, teams;
   cin >> n;
   vector<int> T(n+1);
   for (auto &e : T) cin >> e;
   sort(T.begin(), T.end());
   for (int i = 0; i < n; i++) {
      if (T[i]==1) {
         
      }
      else if (T[i]==2)
      else 
   }
   return 0;
}