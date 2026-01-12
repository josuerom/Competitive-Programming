/**
 *   author:  josuerom
 *   created: 29/11/23 21:55:22
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, h, m;

void solve() {
   cin >> n >> h >> m;
   vector<pair<int, int>> vp;
   for (int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      if (x == 0) x = 24;
      vp.push_back({x, y});
   }
   sort(vp.begin(), vp.end());
   if (h == 0) h = 24;
   if (vp[0].first == h && vp[0].second == m) {
      cout << "0 0\n";
      return;
   }
   int minB = 0, minW = 0, minD = 0;
   if (vp[0].first == 24) {
      // minD = vp[0].second + ;
      // cout << minD / 60 <<" "<< minD - (minD / 60 * 60) << br;
   } else if (h <= vp[0].first) {
      minB = 60 * h + m, minW = 60 * vp[0].first + vp[0].second;
      minD = abs(minB - minW);
      cout << minD / 60 <<" "<< minD - (minD / 60 * 60) << br;
   } else {
      minB = 1440 - (h * 60 + m), minW = 60 * vp[0].first + vp[0].second;
      minD = minB + minW;
      cout << minD / 60 <<" "<< minD - (minD / 60 * 60) << br;
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