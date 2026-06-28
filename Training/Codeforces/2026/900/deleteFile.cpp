/**
 *   author:  josuerom
 *   created: 27/06/26 22:24:14
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

const int N = (1e6) + 100;

void solve() {
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