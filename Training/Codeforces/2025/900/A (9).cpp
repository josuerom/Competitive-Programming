// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 14/03/2024 21:58:16

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

ll n, k, x, sum;

void solve() {
   cin >> n >> k >> x;
   sum = (n * (n + 1)) / 2;
   if ((sum < x) || (sum == x && n != k) || (k == 1 && x > n)) {
      cout << "NO\n";
      return;
   }
   if ((sum == x && k == n) || (k == 1 && n > x) || (x == 1 && k == 1)) {
      cout << "YES\n";
      return;
   }
   if (x % 2 == 1) {
   }
   cout << (a % k == 0 ? "YES" : "NO") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}