/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 27/10/23 16:11:45
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n = 0, m = 0, t = 0;
   while (cin >> n >> m) {
      t = max(n, m);
      n = min(n, m);
      if (n <= 0) break;
      m = t;
      int ans = 0;
      for (int i = n; i <= m; i++) {
         cout << i << " ";
         ans += i;
      }
      cout << "sum =" << ans << '\n';
   }
   return 0;
}
