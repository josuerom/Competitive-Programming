// author:  josuerom
// created: 23/03/2024 23:14:02

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int i, j, tmp;

void solve() {
   while (cin >> i >> j) {
      cout << i << " " << j << " ";
      tmp = max(i, j);
      i = min(i, j);
      j = tmp;
      int ans = 0;
      for (int k = j; k >= i; k--) {
         int c = 0, b = k;
         while (b != 1) {
            if (b % 2 == 0) b /= 2;
            else b = 3 * b + 1;
            c++;
         }
         ans = max(ans, c + 1);
      }
      cout << ans << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
