/**
-*   author:  josuerom
-*   created: 27/10/23 15:54:56
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

const int N = 50 + 7;
int a[N], n;
string s;

void solve() {
   cin >> s >> n;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   for (int i = 0; i < n; i++) {
      for (int j = 1; j <= a[i]; j++) {
         cout << s;
      }
      cout << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   //cin >> tt;
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
