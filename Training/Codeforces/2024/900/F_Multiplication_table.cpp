/**
 *   author:  josuerom
 *   created: 21/10/23 20:44:09
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define long  long long
#define endl  '\n'

int n;

void solve() {
   cin >> n;
   for (int i = 1; i <= 12; i++)
      cout << n <<" * "<< i << " = " << (n * i) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
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