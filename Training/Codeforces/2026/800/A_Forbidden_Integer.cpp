/**
 *   author:  josuerom
 *   created: 02/04/26 01:20:41
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

int n, k, x;

void solve() {
   cin >> n >> k >> x;
   if (x != 1) {
      cout << "YES\n";
      cout << n << "\n";
      for (int i = 0; i < n; i++) cout << 1 << " ";
      cout << "\n";
      return;
   }
   if (k == 1) {
      cout << "NO\n";
      return;
   }
   if (n % 2 == 0) {
      cout << "YES\n";
      cout << n / 2 << "\n";
      for (int i = 0; i < n / 2; i++) cout << 2 << " ";
      cout << "\n";
   } else {
      if (k >= 3) {
         cout << "YES\n";
         cout << 1 + (n - 3) / 2 << "\n";
         cout << 3 << " ";
         for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
         cout << "\n";
      } else cout << "NO\n";
   }
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