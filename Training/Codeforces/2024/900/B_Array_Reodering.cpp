/**
 *   author:  josuerom
 *   created: 05/10/23 15:15:39
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

const int N = 2e3 + 7;
int a[N];
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n, [](int x, int y) { return x % 2 < y % 2; });
   int ans = 0;
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++)
         ans += gcd(a[i], 2 * a[j]) > 1;
   }
   cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "--- Case #" << nc << " ---\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}