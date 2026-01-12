// author:  josuerom
// created: 22/03/2024 22:47:03

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, a, b, d, i;

void solve() {
   cin >> n >> a >> b;
   if (n == 1) {
      cout << (a == b ? "1\n" : "0\n");
      cout << a <<":"<< b << br;
      return;
   }
   d = (n - (a + b) < 0 ? 0 : n - (a + b));
   i = 1;
   vector<pair<int, int>> ans(n + 1, {0, 0});
   while (i <= n && a > 0) {
      a--;
      ans[i] = {1, 0};
      i++;
   }
   if (a > 0) ans[1].first += a;
   if (b > 0) {
      if (i == n + 1) {
         ans[1].first++;
         ans[n].first--;
         ans[n].second = b;
      } else {
         while (i <= n && b > 0) {
            b--;
            ans[i].second++;
            i++;
         }
         if (b > 0) ans[n].second += b;
      }
   }
   // for (int i = 1; i <= n; i++) if (ans[i].first == ans[i].second) d++;
   cout << d << br;
   for (int i = 1; i <= n; i++) {
      cout << ans[i].first <<":"<< ans[i].second << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}