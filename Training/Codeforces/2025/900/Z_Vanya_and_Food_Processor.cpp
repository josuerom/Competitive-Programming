/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 21/10/23 18:35:55
**/
#include <bits/stdc++.h>

#define long  long long
#define endl  '\n'

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   long n, h, k, t = 0, x = 0;
   cin >> n >> h >> k;
   for (int i = 0; i < n; i++) {
      long v; cin >> v;
      t += x / k;
      x %= k;
      if (x + v > h) {
         t++; x = 0;
      }
      x += v;
   }
   cout << t + (x + k - 1) / k << endl;
   return 0;
}