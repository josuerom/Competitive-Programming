/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   short t, n, k;
   cin >> t;
   bool existe=false;
   while (t--) {
      cin >> n >> k;
      short arr[n];
      for (auto &e : arr) cin >> e;
      if (k>2) cout << (arr[k-1]==1 ? "YES\n" : "NO\n");
      else cout << (arr[0]==1||arr[1]==1 ? "YES\n" : "NO\n");
   }
   return 0;
}