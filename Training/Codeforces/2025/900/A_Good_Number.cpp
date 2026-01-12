/**
 *   author:  josuerom
 *   created: 24/11/23 14:17:30
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, k, x;

void solve() {
   set<int> st;
   int ans = 0;
   for (cin >> n >> k; n; n--) {
      cin >> x;
      while (x) {
         st.insert(x % 10);
         x /= 10;
      }
      int cnt = 0;
      auto it = st.begin();
      for (int i = 0; i <= k && i < st.size(); i++, it++) {
         cnt += *it == i;
      }
      ans += cnt == k + 1;
      st.clear();
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   // cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}