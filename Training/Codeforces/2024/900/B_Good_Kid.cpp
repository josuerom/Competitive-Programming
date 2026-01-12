/**
 *   author:  josuerom
 *   created: 14/10/23 21:36:43
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define pb  push_back
#define br  '\n'

void solve() {
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   int ans = 0;
   for (int i = 0; i < n; i++) {
      a[i]++;
      int p = 1;
      for (auto &e : a) {
         p *= e;
      }
      --a[i];
      ans = max(ans, p);
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}