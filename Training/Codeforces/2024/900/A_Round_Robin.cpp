/**
 *   author:  josuerom
 *   created: 09/10/23 20:14:36
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

int n, k, x, y;

void solve() {
   cin >> n >> k;
   vector<pair<int, int>> vp;
   for (int i = 0; i < n; i++) {
      cin >> x >> y;
      vp.pb(mp(y, x));
   }
   int m = n;
   while (true) {
      for (int i = 0; i < n; i++) {
         if (vp[i].fi == -k)
            continue;
         vp[i].fi -= k;
         if (vp[i].fi <= 0) {
            cout << vp[i].se << endl;
            vp[i].fi = -k;
            if (!--m) return;
         }
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}