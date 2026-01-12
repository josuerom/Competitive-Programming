/**
 *  author:  josuerom
 *  created: 20/04/23 00:53:05
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
   #include "data/debug.h"
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, x;
      cin >> n >> x;
      int ans = 1;
      if (n!=1 && n!=2) {
         ans = (n/x);
         if (ans%2==0) ans += 1;
         else ans += 2;
      }
      cout << ans << '\n';
   }
   return 0;
}