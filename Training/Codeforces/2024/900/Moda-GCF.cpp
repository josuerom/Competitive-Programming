// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 18/03/2024 16:39:01

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, x;
map<int, int> mp;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> x;
      mp[x] += 1;
   }
   int ans = 0, j = 0;
   for (auto &e : mp) {
      if (e.second > j) j = e.second, ans = e.first;
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
