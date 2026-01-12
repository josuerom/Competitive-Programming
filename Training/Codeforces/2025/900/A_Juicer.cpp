/**
 *   author:  josuerom
 *   created: 05/11/23 10:26:27
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

const int N = 1e5 + 10;
int a[N], n, b, d;

void solve() {
   cin >> n >> b >> d;
   int ans = 0, p = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= b) {
         p += a[i];
         if (p > d) ans++, p = 0;
      }
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