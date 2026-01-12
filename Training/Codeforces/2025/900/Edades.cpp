// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 20/03/2024 10:28:08

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
   for (auto &e : mp) cout << e.first <<" " << e.second << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}