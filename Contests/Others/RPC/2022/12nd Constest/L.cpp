/**
 *  author:  josuerom
 *  created: 25/03/23 22:25:32
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      int ans = sqrt(2*n);
      while ((ans*(ans+1))/2 < n) {
         ans++;
      }
      cout << ans << '\n';
   }
   return 0;
}