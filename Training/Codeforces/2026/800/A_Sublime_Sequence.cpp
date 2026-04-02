/**
 *   author:  josuerom
 *   created: 02/04/26 00:28:49
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

int x, n;

void solve() {
   cin >> x >> n;
   cout << (n % 2 == 0 ? 0 : x) << '\n';
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