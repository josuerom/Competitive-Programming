/**
 *   author:  josuerom
 *   created: 05/11/23 13:05:18
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, x, ans;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> x;
      ans = max(ans, x);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   // cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}