/**
 *   author:  josuerom
 *   created: 27/11/23 23:15:11
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

const int N = 2e5 + 10;
int a[N], n, k;

void solve() {
   cin >> n >> k;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   if (n == 1) {
      cout << "0\n";
      return;
   }
   if (!is_sorted(a, a + n))
      sort(a, a + n);
   int cnt  = 1, ans = 0;
   for (int i = 0; i < n - 1; i++) {
      if (abs(a[i] - a[i + 1]) <= k) cnt++;
      else {
         debug(cnt);
         ans = max(ans, cnt);
         cnt = 1;
      }
   }
   if (ans == 0) {
      cout << "0\n";
      return;
   }
   ans = max(ans, cnt);
   cout << n - ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   cin >> tt;
   while (tt--) {
#ifdef DEBUG
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}