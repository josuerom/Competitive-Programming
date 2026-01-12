// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 18/03/2024 14:47:26

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, m, x;
map<int, int> mp;
vector<int> ans;

void solve() {
   cin >> n >> m;
   for (int i = 0; i < n; i++) {
      cin >> x;
      mp[x] += 1;
   }
   for (int i = 0; i < m; i++) {
      cin >> x;
      mp[x] += 1;
   }
   for (auto &e : mp) {
      if (e.second == 1) ans.push_back(e.first);
   }
   cout << ans.size() << br;
   for (auto &e : ans) cout << e << " ";
   cout << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
