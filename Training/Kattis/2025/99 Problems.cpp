/**
 *   author:  josuerom
 *   created: 21/06/25 18:31:42
**/
#include <bits/stdc++.h>
using namespace std;

#define uint  unsigned int
#define long  unsigned long long

int n, a, b;
bool ans1, ans2;

void solve() {
   cin >> n;
   a = b = n;
   ans1 = ans2 = false;
   while (n > 99 && !ans1 && !ans2) {
      ans1 = (a % 10 == 9) && (a / 10) % 10 == 9 ? true : false;
      ans2 = (b % 10 == 9) && (b / 10) % 10 == 9 ? true : false;
      b -= b == 0 || ans2 ? 0 : 1;
      a += ans1 ? 0 : 1;
   }
   cout << (ans1 && ans2 || ans1 ? a : ans2 ? b : n == 99 ? 199 : 99) << '\n';
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