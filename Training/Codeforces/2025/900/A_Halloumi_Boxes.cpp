/**
 *   author:  josuerom
 *   created: 04/12/23 16:09:33
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

const int N = 120;
int a[N], n, k;

void solve() {
   cin >> n >> k;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   if (k > 1) cout << "YES\n";
   else {
      for (int i = 0; i < n - 1; i++) {
         if (a[i] > a[i + 1]) {
            cout << "NO\n";
            return;
         }
      }
      cout << "YES\n";
   }
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