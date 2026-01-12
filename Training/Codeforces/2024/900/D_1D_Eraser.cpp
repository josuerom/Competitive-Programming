/**
 *   author:  josuerom
 *   created: 14/10/23 22:54:28
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define long  long long
#define endl  '\n'

const int N = 2e5 + 7;
char s[N];
int n, k;

void solve() {
   cin >> n >> k;
   int cb = 0, ans = 0;
   for (int i = 0; i < n; i++) {
      cin >> s[i];
      if (s[i] == 'B' || s[i] == 'b') cb++;
      s[i] = toupper(s[i]);
   }
   if (cb > 0) {
      for (int i = 0; i < n; i++) {
         if (s[i] == 'B') {
            for (int j = i, l = 0; j < n && l < k; j++, l++) {
               if (s[j] == 'B') cb--;
               if (l == k - 1 || j == n - 1) i = j;
            }
            ans++;
         }
      }
   }
   cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}