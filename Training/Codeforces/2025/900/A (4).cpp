// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 12/03/2024 17:53:06

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e2;
int n, m, k, b[N], c[N], ans;

void solve() {
   cin >> n >> m >> k;
   for (int i = 0; i < n; i++) cin >> b[i];
   for (int i = 0; i < m; i++) cin >> c[i];
   sort(b, b + n);
   sort(c, c + m);
   ans = 0;
   for (int i = 0; i < n; i++) {
      if (b[i] + c[0] > k) break;
      for (int j = 0; j < m; j++) {
         if (b[i] + c[j] <= k) ans++;
         else break;
      }
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
