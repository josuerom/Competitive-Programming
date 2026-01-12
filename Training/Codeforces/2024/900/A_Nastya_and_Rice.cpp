/**
 *   author:  josuerom
 *   created: 28/11/23 00:51:11
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

int n, a, b, c, d;

void solve() {
   cin >> n >> a >> b >> c >> d;
   int l = n * (a - b), r = n * (a + b);
   if (r >= c - d && l <= c + d)
      cout << "Yes\n";
   else
      cout << "No\n";
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