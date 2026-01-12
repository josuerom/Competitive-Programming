/**
 *   author:  josuerom
 *   created: 24/02/24 20:34:28
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

const int N = 2e5 + 10; 
int n, k, a[N], b[N];

void solve() {
   cin >> n >> k;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   iota(b, b + n, 1);
   if (equal(a, a + n, b)) {
      cout << "0\n";
      return;
   }
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