/**
 *   author:  josuerom
 *   created: 11/09/23 14:04:19
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ull unsigned long long int

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1", "r", stdin);
   freopen("/samples/output", "w", stdout);
#endif
   int tt = 1;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      if (n == 1) {
         cout << "0\n";
         continue;
      }
      int ans = 0;
      ull m = (ull) n;
      for (int c = 0; m > 1; ans++) {
         if (m % 6 == 0) {
            m /= 6;
            c = 0;
         } else {
            m *= 2;
            if (c++ > (n % 6)) {
               ans = -1;
               break;
            }
         }
      }
      cout << ans << '\n';
   }
   return 0;
}