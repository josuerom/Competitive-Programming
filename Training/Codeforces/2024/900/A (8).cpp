// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 14/03/2024 19:55:23
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll  unsigned long long
#define br  '\n'
 
ll n, q, l, r, k, a, add, sum, acc;

void solve() {
   cin >> n >> q;
   vector<ll> v(n + 1), b(n + 1);
   b.push_back(0);
   add = 0;
   bool flag = 1;
   for (int i = 1; i <= n; i++) {
      cin >> v[i];
      add += v[i];
      b[i] = add;
      if (i > 1 && v[i - 1] != v[i]) flag = 0;
   }
   if (flag) {
      for (int i = 0; i < q; i++) {
         cin >> l >> r >> k;
         sum = add - v[1] * (r - l + 1);
         a = k * (r - l + 1);
         cout << ((sum + a) % 2 == 1 ? "YES" : "NO") << br;
      }
      return;
   }
   for (int j = 0; j < q; j++) {
      cin >> l >> r >> k;
      acc = add - (b[r] - b[l - 1]);
      a = k * (r - l + 1);
      acc += a;
      cout << (acc % 2 == 1 ? "YES" : "NO") << br;
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