/**
 *   author:  josuerom
 *   created: 11/09/23 16:35:08
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int tt = 1;
   cin >> tt;
   char abc[27] = "abcdefghijklmnopqrstuvwxyz";
   while (tt--) {
      int n, a, b, l = 0;
      cin >> n >> a >> b;
      char ans[2007] = {0};
      for (int i = 0; i < (n / a); i++) {
         for (int j = 0; j < (a / b); j++) {
            for (int k = 0; k < b; k++)
               ans[l++] = abc[k];
         }
      }
      n = n - strlen(ans);
      if (n) {
         for (int i = 0, j = 0; i < n; i++, j++) {
            if (j < b) ans[l++] = abc[j];
            else {
               j = 0; ans[l++] = abc[j];
            }
         }
      }
      cout << ans << endl;
   }
   return 0;
}