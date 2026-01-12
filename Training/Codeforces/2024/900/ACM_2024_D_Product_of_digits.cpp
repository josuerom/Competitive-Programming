/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 03/06/24 15:15:34
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      if (n == 0) {
         cout << "0\n";
         continue;
      }
      if (n != 1) {
         string ans = "";
         for (int i = 9; i > 1; i--) {
            while (n % i == 0) {
               ans += to_string(i);
               n /= i;
            }
            if (n == 1) break;
         }
         if (n != 1) cout << "-1\n";
         else {
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            continue;
         }
      } else cout << "1\n";
   }
   return 0;
}