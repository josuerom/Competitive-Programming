/**
 *   author:  josuerom
 *   created: 26/07/23 17:40:58
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

void solve() {
   int w, h, n;
   cin >> w >> h >> n;
   if (n == 1) {
      cout << "YES\n";
      return;
   }
   int ans = 1;
   while (w%2 == 0) {
      w /= 2;
      ans *= 2;
   }
   while (h%2 == 0) {
      h /= 2;
      ans *= 2;
   }
   cout << (ans >= n ? "YES" : "NO") << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--)
      solve();
#endif
   return 0;
}