/**
 *   author:  josuerom
 *   created: 28/06/26 11:37:02
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

int a, b, c, d, rc, rd;

void solve() {
   cin >> a >> b >> c >> d;
   if (b > d) {
      cout << "-1\n";
   } else {
      if (b == d) rd = 0;
      else if (abs(b) == abs(d)) rd = 2 * abs(b);
      else {
         if (b <= 0 && d >= 0) rd = abs(b) + abs(d);
         else rd = abs(abs(b) - abs(d));
      }
      b += rd, a += rd;
      if (a < c) {
         cout << "-1\n";
         return;
      }
      if (a == c) rc = 0;
      else if (abs(a) == abs(c)) rc = 2 * abs(a);
      else {
         if (a >= 0 && c <= 0) rc = abs(a) + abs(c);
         else rc = abs(abs(a) - abs(c));
      }
      a -= rc;
      cout << (a == c && b == d ? rd + rc : -1) << endl;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}