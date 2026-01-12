/**
 *   author:  josuerom
 *   created: 11/09/23 15:24:02
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
#ifndef ONLINE_JUDGE
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int tt = 1;
   while (tt--) {
      char d;
      char s[107];
      scanf("%c\n%s", &d, s);
      char k[31] = "qwertyuiopasdfghjkl;zxcvbnm,./", ans[107];
      memset(ans, 0, sizeof ans);
      int n = strlen(s);
      for (int l = 0; l < n; l++) {
         int i = 0;
         for (; i < 30; i++) {
            if (s[l] == k[i])
               break;
         }
         ans[l] = (d == 'R') ? k[i - 1] : k[i + 1];
      }
      printf("%s\n", ans);
   }
   return 0;
}