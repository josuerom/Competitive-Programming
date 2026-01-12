/**
 *   author:  josuerom
 *   created: 13/09/23 22:53:58
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

int x, n, m;

void solve() {
   cin >> x >> n >> m;
   if ((x - m * 10) <= 0) {
      cout << "YES\n";
      return;
   }
   while (n--) {
      x = (x / 2) + 10;
      if (x <= 0) {
         cout << "YES\n";
         return;
      }
   }
   cout << ((x - m * 10) <= 0 ? "YES" : "NO") << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "--- Case #" << nc << " ---\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}
