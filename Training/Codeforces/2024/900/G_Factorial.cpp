/**
 *   author:  josuerom
 *   created: 21/10/23 20:49:02
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define long  unsigned long long
#define endl  '\n'

const int N = 25; /// Hasta el #22
long dp[N], n;

long f(long i) {
   if (i == 1 || i == 0) return 1;
   if (dp[i] != 0) return dp[i];
   dp[i] = i * f(i - 1);
   return dp[i];
}

void solve() {
   cin >> n;
   cout << f(n) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}