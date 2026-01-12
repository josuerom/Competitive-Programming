/**
 *   author:  josuerom
 *   created: 04/08/23 17:38:30
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

int x, y, z;

void solve() {
   cin >> x >> y >> z;
   if (x == y && x == z) {
      cout <<"YES\n"<<x<<" "<<x<<" "<<x<< '\n';
      return;
   }
   if (x == y || x == z || y == z) {
      int mx = max({x, y, z});
      int mn = min({x, y, z});
      if ((mx == x && mx == y)) {
         if (z > mx) {
            cout << "NO\n";
            return;
         }
         cout << "YES\n" << mx << " " << mn << " ";
         cout << (mn == 1 ? 1 : mn -  1) << '\n';
         return;
      } else if ((mx == x && mx == z)) {
         if (y > mx) {
            cout << "NO\n";
            return;
         }
         cout << "YES\n" << mx << " " << mn << " ";
         cout << (mn == 1 ? 1 : mn -  1) << '\n';
         return;
      } else if ((mx == y && mx == z)) {
         if (x > mx) {
            cout << "NO\n";
            return;
         }
         cout << "YES\n" << mx << " " << mn << " ";
         cout << (mn == 1 ? 1 : mn -  1) << '\n';
         return;
      }
   }
   cout << "NO\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
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