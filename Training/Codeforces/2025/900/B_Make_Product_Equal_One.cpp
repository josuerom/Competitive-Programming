/**
 *   author:  josuerom
 *   created: 16/05/24 19:54:34
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

void solve() {
   int n;
   cin >> n;
   vector<int> a(n);
   ll ans = 0LL, zeros = 0LL, curr = 1LL;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) {
         zeros++;
         continue;
      } else if (a[i] < 0) {
         ans += abs(a[i]) - 1;
         curr *= -1;
      } else if (a[i] > 0) {
         ans += a[i] - 1;
         curr *= 1;
      }
   }
   if (curr < 0LL) {
      if (zeros) cout << ans + zeros << br;
      else cout << ans + 2 << br;
   } else cout << ans + zeros << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
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