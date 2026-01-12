/**
 *   author:  josuerom
 *   created: 19/02/24 09:38:20
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

char s[6];

void solve() {
   int A = 0, B = 0;
   for (int i = 0; i < 5; i++) {
      char s; cin >> s;
      if (s == 'A') A++;
      else B++;
   }
   cout << (A > B ? "A" : "B") << br;
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