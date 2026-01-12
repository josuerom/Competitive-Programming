/**
 *   author:  josuerom
 *   created: 18/05/24 20:38:57
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, k;

void solve() {
   cin >> n >> k;
   vector<int> a(n), b(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   for (int i = 0; i < n; i++) {
      cin >> b[i];
   }
   vector<int> c(a);
   sort(c.begin(), c.end());
   sort(b.begin(), b.end());
   unordered_multimap<int, int> mlp;
   for (int i = 0; i < n; i++) {
      mlp.insert({c[i], b[i]});
   }
   for (int i = 0; i < n; i++) {
      auto ans = mlp.find(a[i]);
      cout << ans->second << " \n"[i == n - 1];
      mlp.erase(ans);
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   int nc = 1;
   while (tt--) {
      cout << "Case #" << nc++ << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}