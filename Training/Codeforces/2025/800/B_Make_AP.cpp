/**
 *   author:  josuerom
 *   created: 19/09/23 16:40:16
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

int a[3];

void solve() {
   cin >> a[0] >> a[1] >> a[2];
   sort(a, a + 3);
   if (abs(a[0] - a[1]) == abs(a[1] - a[2]) || (a[2] % a[1] == 0 && a[1] % a[0] == 0)) {
      cout << "YES\n";
      return;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "------ Case #" << nc << " ------\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}