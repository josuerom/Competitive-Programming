/**
 *   author:  josuerom
 *   created: 26/04/24 16:48:39
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, a, b;
string s;

void solve() {
   cin >> n >> s;
   for (int i = 0; i < int(s.size()); i++) {
      if (s[i] != '4' && s[i] != '7') {
         cout << "NO\n";
         return;
      }
      a += (i < n / 2 ? s[i] - '0' : 0);
      b += (i >= n / 2 ? s[i] - '0' : 0);
   }
   cout << (a == b ? "YES" : "NO") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
#ifdef LOCAL
   int nc = 1;
   while (tt--) {
      cout << "Case #" << nc++ << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}