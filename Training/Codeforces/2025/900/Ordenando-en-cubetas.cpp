// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 16/03/2024 19:40:34

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, m, x;

void solve() {
   cin >> n >> m;
   map<int, int> mp;
   for (int i = 1; i <= m; i++) mp[i] = 0;
   for (int i = 1; i <= n; i++) cin >> x, mp[x] += 1;
   for (auto &e : mp)
      cout << e.first << ": " << e.second << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}