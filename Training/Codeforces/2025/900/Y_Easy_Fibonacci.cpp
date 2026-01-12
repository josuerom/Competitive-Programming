/**
 *   author:  josuerom
 *   created: 21/10/23 19:57:30
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

const int N = 50;
long a[N] = {0, 1}, n;

void preCalculate() {
   for (int i = 2; i < 50; i++)
      a[i] = a[i - 2] + a[i - 1];
}

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cout << a[i] << " \n"[i == n - 1];
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   preCalculate();
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