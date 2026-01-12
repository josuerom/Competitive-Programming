/**
 *   author:  josuerom
 *   created: 17/02/24 21:18:11
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

// Para trabajar facilmente con las 9 casillas centrales 
int a[5][5];

void solve() {
   for (int i = 1; i < 4; i++) {
      for (int j = 1; j < 4; j++)
         cin >> a[i][j];
   }
   for (int i = 1; i < 4; i++) {
      for (int j = 1; j < 4; j++) {
         if ((a[i][j] + a[i + 1][j] + a[i - 1][j] + a[i][j + 1] + a[i][j - 1]) % 2 == 0) cout << "1";
         else cout << "0";
      }
      cout << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   // cin >> tt;
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