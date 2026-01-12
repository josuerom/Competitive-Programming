/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 13/10/23 14:54:44
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, m, ans = 0; cin >> n >> m;
      if ((n == 1 && m > 2) || (n > 2 && m == 1))
         ans = -1;
      else if ((n % 2 == 0 && m % 2 != 0) || (n % 2 != 0 && m % 2 == 0))
         ans = max(n, m) * 2 - 3;
      else
         ans = max(n, m) * 2 - 2;
      cout << ans << '\n';
   }
   return 0;
}