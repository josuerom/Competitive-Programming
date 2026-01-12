// author:  josuerom
// created: 24/03/2024 00:02:36

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, k, f, t;

void solve() {
   cin >> n >> k;
   int ans = INT_MIN;
   for (int i = 0; i < n; i++) {
      cin >> f >> t;
      if (t > k) ans = max(ans, f - (t - k));
      else ans = max(ans, f);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
