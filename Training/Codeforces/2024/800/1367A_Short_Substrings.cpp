/**
 *  author:  josuerom
 *  created: 22/04/23 19:11:23
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("sample/input.in", "r", stdin);
   // freopen("sample/output.ans", "w", stdout);
#endif
   int tt;
   cin >> tt;
   while (tt--) {
      string b, ans;
      cin >> b;
      int n = int(size(b));
      if (n>2) {
         for (int i = 0; i < n; i+=2) {
            ans += b[i];
            // debug(ans);
         }
         ans += b[n-1];
      } else ans = b;
      cout << ans << '\n';
   }
   return 0;
}