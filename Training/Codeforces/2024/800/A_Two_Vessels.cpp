/**
 *   author:  josuerom
 *   created: 07/09/23 10:47:33
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

clock_t startTime;
double getSolutionTime() {
   return (double) (clock() - startTime) / CLOCKS_PER_SEC;
}

int a, b, c, temp;

void solve() {
   cin >> a >> b >> c;
   if (a == b)
      cout << "0\n";
   else {
      temp = max(a, b);
      a = min(a, b);
      b = temp;
      int ans = 0;
      debug(a, b, c);
      while (a < b) {
         b -= c;
         a += c;
         ++ans;
      }
      cout << ans << '\n';
   }
}

int main() {
   startTime = clock();
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "------ Case #" << nc << " ------\n";
      solve();
      cout << "time " << setprecision(5) << getSolutionTime() << " ms\n";
#else
      solve();
#endif
   }
   return 0;
}