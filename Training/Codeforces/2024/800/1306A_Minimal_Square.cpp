/**
 *   author:  josuerom
 *   created: 29/06/23 23:01:54
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

void solve() {
   pair<int, int> q;
   cin >> q.fi >> q.se;
   int ans = 0;
   if (q.fi == q.se) ans = (q.fi * 2) * (q.se * 2);
   else {
      int temp = max(q.fi, q.se);
      q.se = min(q.fi, q.se);
      q.fi = temp;
      if ((q.se * 2) >= q.fi) {
         temp = (q.se * 2) - q.fi;
         q.fi += temp;
         ans = q.fi * q.fi;
      } else ans = q.fi * q.fi;
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   #ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
   #else
   while (tt--) solve();
   #endif
   return 0;
}