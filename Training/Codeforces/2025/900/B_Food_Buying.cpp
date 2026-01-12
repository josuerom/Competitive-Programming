/**
 *   author:  josuerom
 *   created: 17/02/24 21:39:37
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, ans;

void solve() {
   cin >> n;
   while (n >= 10) {
      int y = n / 10;
      ans += y * 10;
      n = y + n % 10;
   }
   cout << ans + n << br;
   ans = 0;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   cin >> tt;
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