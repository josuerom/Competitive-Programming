/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 27/10/23 16:21:48
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int x, y, t;
      cin >> x >> y;
      t = max(x, y);
      x = min(x, y) + 1;
      y = t;
      int ans = 0;
      for (int i = x; i < y; i++) {
         if (i % 2 != 0) ans += i;
      }
      cout << ans << '\n';
   }
   return 0;
}
