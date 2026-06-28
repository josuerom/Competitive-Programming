/**
 *   author:  josuerom
 *   created: 28/06/26 13:53:42
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

const int N = (1e3) + 100;
int a[N], b[N], n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) cin >> a[i];
   if (n == 1) {
      cout << a[0] << endl;
      return;
   }
   int res = a[0];
   for (int i = 1; i < n; i++) {
      res ^= a[i];
   }
   int res2 = b[0] = res ^ a[0];
   for (int i = 1; i < n; i++) {
      b[i] = res ^ a[i];
      res2 ^= b[i];
   }
   cout << (res2 == 0 ? res : -1) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}