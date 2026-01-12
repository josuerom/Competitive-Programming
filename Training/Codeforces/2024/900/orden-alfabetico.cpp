// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 20/03/2024 22:47:00

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n;
string s, j;
vector<pair<string, string>> vp;

void solve() {
   cin >> n;
   for (int k = 0; k < n; k++) {
      cin >> s;
      j = s;
      transform(s.begin(), s.end(), s.begin(), [&](auto c) {
         return tolower(c);
      });
      vp.push_back({s, j});
   }
   sort(vp.begin(), vp.end());
   for (auto &e : vp) cout << e.second << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}