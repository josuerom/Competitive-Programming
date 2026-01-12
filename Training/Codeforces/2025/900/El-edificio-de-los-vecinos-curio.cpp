// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 17/03/2024 14:00:09

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, m, p, q;

void solve() {
   cin >> n >> m;
   vector<bool> a(n + 1, 1), b(n + 1, 1); // Empiezo a aplicar dp gracias a Jehova Dios.
   a[0] = 0, b[0] = 0;
   for (int i = 0; i < m; i++) {
      cin >> p >> q;
      b[p] = 0, a[q] = 0;
   }
   // for (int i = 0; i < n + 1; i++) cout << a[i] << " ";
   // cout << br;
   // for (int i = 0; i < n + 1; i++) cout << b[i] << " ";
   // cout << br;
   vector<int> ans1, ans2;
   for (int i = 1; i <= n; i++) {
      if (a[i] == 1 && b[i] == 0) ans1.push_back(i);
      if (b[i] == 1 && a[i] == 0) ans2.push_back(i);
      if (a[i] == 1 && b[i] == 1) ans1.push_back(i), ans2.push_back(i);
   }
   cout << ans1.size() << " " << ans2.size() << br;
   for (auto &e : ans1) cout << e << " ";
   cout << br;
   for (auto &e : ans2) cout << e << " ";
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
