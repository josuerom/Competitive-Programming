/**
 *   author:  josuerom
 *   created: 28/06/26 15:57:13
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

long n, k, res;

void solve() {
   cin >> n >> k;
   if (n % 2 == 0 && k <= n / 2) res = k * 2 - 1;
   else if (n % 2 == 0 && k > n / 2) res = k - (n - k);
   else if (n % 2 != 0 && k <= n / 2 + 1) res = k * 2 - 1;
   else res = k - (n - k) - 1;
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