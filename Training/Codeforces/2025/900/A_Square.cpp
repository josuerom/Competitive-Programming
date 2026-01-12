/**
 *   author:  josuerom
 *   created: 20/02/24 19:57:10
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

int x, y;
vector<pair<int, int>> vp;

void solve() {
   for (int i = 0; i < 4; i++) {
      cin >> x >> y;
      vp.push_back({x * 1, y * 1});
   }
   sort(vp.begin(), vp.end());
   int ans = abs(vp[0].first - vp[3].first) * abs(vp[0].second - vp[3].second); 
   cout << ans << br;
   vp.clear();
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