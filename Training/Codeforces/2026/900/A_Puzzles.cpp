/**
 *   author:  josuerom
 *   created: 28/06/26 17:52:08
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

const int N = (1e3) + 100;
int a[N], n, m, MAX, MIN, res = N;

void solve() {
   cin >> n >> m;
   for (int i = 0; i < m; i++) {
      cin >> a[i];
   }
   sort(a, a + m);
   for (int i = 0; i < m - 1; i++) {
      MAX = 0, MIN = N;
      for (int j = i; j < i + n; j++) {
         MAX = max(MAX, a[j]);
         MIN = min(MIN, a[j]);
      }
      res = min(res, MAX - MIN);
   }
   cout << res << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   // cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}