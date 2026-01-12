// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 20/03/2024 12:23:22

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, p, x, y;
vector<pair<int, int>> vp;
set<pair<int, int>> ans;

void solve() {
   cin >> n >> p;
   cin >> x >> y;
   vp.push_back({x, y});
   if (p == 1) {
      cout << "1\n";
      return;
   }
   for (int i = 1; i < p; i++) {
      cin >> x >> y;
      vp.push_back({x, y});
      if (vp[i - 1].first != x) ans.insert({min(vp[i - 1].first, x), max(vp[i - 1].first, x)});
      if (vp[i - 1].first != y) ans.insert({min(vp[i - 1].first, y), max(vp[i - 1].first, y)});
      if (vp[i - 1].second != x) ans.insert({min(vp[i - 1].second, x), max(vp[i - 1].second, x)});
      if (vp[i - 1].second != y) ans.insert({min(vp[i - 1].second, y), max(vp[i - 1].second, y)});
   }
   // for (auto &e : ans) cout << e.first <<" " << e.second << br;
   cout << ans.size() << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}