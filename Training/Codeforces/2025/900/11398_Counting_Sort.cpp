/**
 *   author:  josuerom
 *   created: 24/11/23 23:29:54
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

const int N = 1e5 + 10;
int a[N], b[N];
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);
   b[0] = 0;
   for (int i = 1, l = 0; i < n; i++) {
      if (a[i - 1] == a[i]) b[i] = l;
      else b[i] = i, l = i;
   }
   for (int i = 0; i < n; i++)
      cout << a[i] << " \n"[i == n - 1];
   for (int i = 0; i < n; i++)
      cout << b[i] << " \n"[i == n - 1];
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