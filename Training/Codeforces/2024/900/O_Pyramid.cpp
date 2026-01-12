/**
-*   author:  josuerom
-*   created: 27/10/23 15:41:50
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

int n;

void solve() {
   cin >> n;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
         cout << "*";
      }
      cout << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   //cin >> tt;
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
