/**
 *   author:  josuerom
 *   created: 10/10/23 22:23:05
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

const int N = 1e5 + 7;
int a[N], b[N];
int n, t;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   if (n == 1) {
      cout << "1\n" << a[0] << "\n";
      return;
   }
   int c = count(a, a + n, 1);
   if (c == n) {
      cout << n << "\n";
      for (int i = 0; i < n; i++)
         cout << 1 << " \n"[i == n - 1];
      return;
   }
   for (int i = 0; i < n - 1; i++) {
      if ((a[i] == 1 && a[i + 1] == 1) || a[i + 1] == 1)
         b[t++] = a[i];
   }
   b[t] = a[n - 1];
   cout << c << "\n";
   for (int i = 0; i < c; i++)
      cout << b[i] << " ";
   cout << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}