/**
 *   author:  josuerom
 *   created: 18/07/23 17:44:26
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

int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

void solve() {
   int n, m, i = 0;
   cin >> n >> m;
   for (; i < n; i++) if (n == primes[i]) {
      break;
   }
   cout << (m == primes[i + 1] ? "YES" : "NO") << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
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