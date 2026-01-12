/**
 *   author:  josuerom
 *   created: 28/04/24 10:30:01
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 1e3 + 10;
int n;
int a[N], b[N];

void solve() {
   cin >> n;
   memset(b, 0, sizeof(b));
   bool flag = false;
   for (int i = 0; i < n; i++) {
     cin >> a[i];
     b[a[i]] += 1;
     if (b[a[i]] >= 2) flag = true;
   }
   if (flag) {
      cout << "0\n";
      return;
   }
   sort(a, a + n);
   int ans = INT_MAX;
   for (int i = 0; i < n - 1; i++) {
      int b = a[i + 1] - a[i];
      ans = min(b, ans);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   int nc = 1;
   while (tt--) {
      cout << "Case #" << nc++ << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}