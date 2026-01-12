/**
 *   author:  josuerom
 *   created: 22/10/23 00:48:05
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
   for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
         cout << "NO\n";
         return;
      }
   }
   cout << "YES\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
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