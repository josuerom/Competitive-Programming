/**
 *   author:  josuerom
 *   created: 02/11/23 21:48:20
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

int l1, r1, l2, r2;

void solve() {
   cin >> l1 >> r1 >> l2 >> r2;
   if ((l2 < l1 && l2 < r1) || (l2 > l1 && l2 > r1)) {
      cout << "-1\n";
      return;
   }
   cout << max(l1, l2) <<" "<< min(r1, r2) << br;
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