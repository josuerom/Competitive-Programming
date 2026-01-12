/**
 *   author:  josuerom
 *   created: 22/02/24 16:34:30
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

void solve() {
   char s;
   string ans;
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
         cin >> s;
         if (s != '.')  ans += s;
      }
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}