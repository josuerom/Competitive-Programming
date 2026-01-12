/**
 *   author:  josuerom
 *   created: 14/04/24 10:25:12
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

int n, k, x, y;

void solve() {
   cin >> n >> k;
   vector<pair<int, int>> vp;
   for (int i = 0; i < n; i++) {
      cin >> x >> y;
      vp.push_back({x, y});
   }
   vector<int> ans;
   while (true) {
      for (auto &e : vp) {
         if (e.second <= 0) continue;
         e.second -= k;
         if (e.second <= 0) ans.push_back(e.first);
      }
      if (ans.size() == n) break;
   }
   for (auto &e : ans) cout << e << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 1;
   // cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << nc++ << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}