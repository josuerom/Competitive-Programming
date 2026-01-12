// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 01/03/2024 14:36:04

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

ll n, x, d, cnt;
char s;

void solve() {
   cin >> n >> x;
   while (n--) {
      cin >> s >> d;
      if (s == '+') x += d;
      else {
         if (x - d < 0) cnt++;
         else x -= d;
      }
   }
   cout << x << " " << cnt << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}