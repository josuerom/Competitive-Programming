/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 03/06/24 16:49:20
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   while (cin >> n) {
      if (n == 0) break;
      int m, nim_sum = 0;
      for (int i = 0; i < n; i++) {
         cin >> m;
         nim_sum ^= m;
      }
      cout << (nim_sum ? "Yes" : "No") << endl;
   }
   return 0;
}