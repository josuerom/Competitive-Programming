/**
 *   author:  josuerom
 *   created: 15/10/23 14:32:25
**/
#include <iostream>

using namespace std;

void solve() {
   long long n = 0, ans = 0;
   cin >> n;
   ans = (n % 2 == 0) ? (n * n) / 2 + (n - 1) : (n * n) / 2 + n;
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      solve();
   }
   return 0;
}