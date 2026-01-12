/**
 *   author:  josuerom
 *   created: 05/11/23 13:10:13
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

const int N = 120;
int a[N], n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);
   for (int i = 0; i < n; i++)
      cout << " " << a[i];
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