/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 03/06/24 14:07:34
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   long long n;
   while (cin >> n) {
      if (n < 0) break;
      long long ans = 1 + n * (n + 1) / 2;
      cout << ans << endl;
   }
   return 0;
}