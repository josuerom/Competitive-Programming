/**
 *   author:  josuerom
 *   created: 28/06/26 12:38:40
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

int n;

void solve() {
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cout << i << " \n"[i == n];
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