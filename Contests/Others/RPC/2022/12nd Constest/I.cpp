/**
 *  author:  josuerom
 *  created: 25/03/23 23:53:30
**/
#include <bits/stdc++.h>
using namespace std;

const uint64_t MOD = 1'000'000'007;

uint64_t coefBinomial(int n, int k) {
   uint64_t res = 1;
   if (k > n - k) k = n - k;
   for (int i = 0; i < k; ++i) {
      res = (res * (n - i)) % MOD;
      res = (res * static_cast<uint64_t>(pow(i + 1, MOD - 2))) % MOD;
   }
   return res;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      int ans = coefBinomial(2 * (n - 1), n - 1);
      ans *= static_cast<uint64_t>(pow(n, MOD - 2));
      ans %= MOD;
      cout << ans << '\n';
   }
   return 0;
}