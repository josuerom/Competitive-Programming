/**
 *   author:  josuerom
 *   created: 13/09/23 15:18:22
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
   if (x > 0) {
      while (true) {
         x = (x / 2) + 10;
         if (x % 10 == 0) {
            x -= 10;
            m--;
         } else
            n--;
         if (x <= 0) {
            cout << "YES\n";
            return;
         }
         if (m <= 0 && n <= 0)
            break;
      }
      cout << "NO\n";
      return;
   }
   cout << "YES\n";
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
