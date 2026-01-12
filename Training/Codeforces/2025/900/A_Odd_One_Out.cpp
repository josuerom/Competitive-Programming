/**
 *   author:  josuerom
 *   created: 20/02/24 20:14:26
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

int a, b, c;

void solve() {
   cin >> a >> b >> c;
   if (a == b) cout << c << br;
   else if (a == c) cout << b << br;
   else cout << a << br;
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