/**
 *   author:  josuerom
 *   created: 11/09/23 10:47:32
**/
#include <bits/stdc++.h>

using namespace std;

int n, m, ans;

void solve() {
   cin >> n >> m;
   if (n < m) {
      cout << n << endl;
      return;
   } else if (n == m) {
      cout << (n + 1) << endl;
      return;
   }
   ans = n;
   for (int i = 2; i <= (n); i++) {
      if (i % m == 0) {
         ans++;
         if (ans % m == 0)
            ans++;
      }
   }
   cout << (ans) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1", "r", stdin);
   freopen("/samples/output", "w", stdout);
#endif
   int tt = 1;
   while (tt--) {
      solve();
   }
   return 0;
}