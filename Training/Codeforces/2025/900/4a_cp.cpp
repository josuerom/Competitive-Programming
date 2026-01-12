// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 10/03/2024 14:49:06

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

ll n, q, l, r, k, a, add, sum, acc, ans;

void solve() {
   cin >> n >> q;
   vector<ll> v(n + 1);
   add = 0;
   for (int i = 1; i <= n; i++) {
      cin >> v[i];
      add += v[i];
   }
   vector<ll> b(v);
   sort(b.begin(), b.end());
   if (b[1] == b[n]) {
      for (int i = 0; i < q; i++) {
         cin >> l >> r >> k;
         sum = add - b[1] * (r - l + 1);
         a = k * (r - l + 1);
         ans = sum + a;
         cout << (ans % 2 == 1 ? "YES" : "NO") << br;
      }
      return;
   }
   for (int j = 0; j < q; j++) {
      cin >> l >> r >> k;
      acc = 0;
      for (int i = l; i <= r; i++) acc += v[i];
      sum = add - acc;
      a = k * (r - l + 1);
      ans = sum + a;
      cout << (ans % 2 == 1 ? "YES" : "NO") << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
