/**
 *   author:  josuerom
 *   created: 07/09/23 11:41:01
**/
#include <bits/stdc++.h>

using namespace std;

int a, b;

void solve() {
   int mx1 = 1, mx2 = 1;
   int x = b, y = b - 1;
   while (x > 1) {
      if (x % 2 == 0)
         x /= 2;
      else
         x = x * 3 + 1;
      ++mx1;
   }
   while (y > 1) {
      if (y % 2 == 0)
         y /= 2;
      else
         y = y * 3 + 1;
      ++mx2;
   }
   printf("%d %d %d\n", a, b, max(mx1, mx2));
}

int main() {
   int i = 0;
   while (scanf("%d %d", &a, &b) != EOF) {
#ifdef josuerom
      cout << "------ Case #"<< ++i <<" ------\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}