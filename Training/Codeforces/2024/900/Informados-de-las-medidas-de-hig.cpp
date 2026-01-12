// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 16/03/2024 20:41:44

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e5;
int n, m, add, a[N], p[N], ans;

void solve() {
   cin >> n >> m;
   p[0] = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      add += a[i];
      p[i + 1] = add;
   }
   for (int i = 0, x = 0; i < m; i++) {
      cin >> x;
      auto it1 = lower_bound(p, p + n, x);
      auto it2 = upper_bound(p, p + n, x);
      // 2 7 10 21 28
      ans = min(it1 - p, it2 - p);
      if (ans == 0) cout << "1 ";
      else cout << ans << " ";
   }
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