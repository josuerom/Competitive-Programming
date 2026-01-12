/**
 *   author:  josuerom
 *   created: 13/11/23 18:03:23
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

const int N = 32;
int a[N], n, cb;

void preCalculate() {
   a[0] = 1;
   for (int i = 1; i <= 31; i++)
      a[i] = (i == 31) ? pow(2, i) - 1 : pow(2, i);
}

void solve() {
   cin >> n;
   cb = __builtin_popcount(n);
   int ans = 0;
   for (int i = 0; i < cb; i++)
      ans += a[i];
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   preCalculate();
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