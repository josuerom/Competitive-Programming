/**
 *   author:  josuerom
 *   created: 29/06/26 11:23:52
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

const int N = (1e1) + 100;
int a[N], b[N], ca[N], cb[N], n, c;

void solve() {
   cin >> n >> c;
   for (int i = 0; i < n; i++) cin >> a[i];
   for (int i = 0; i < n; i++) cin >> b[i];
   memcpy(ca, a, sizeof(a));
   memcpy(cb, b, sizeof(b));
   sort(ca, ca + n);
   sort(cb, cb + n);
   for (int i = 0; i < n; i++) {
      if (ca[i] < cb[i]) {
         cout << "-1\n";
         return;
      }
   }
   int res = 0;
   for (int i = 0; i < n; i++) {
      if (a[i] < b[i]) {
         res += c;
         break;
      }
   }
   for (int i = 0; i < n; i++) res += ca[i] - cb[i];
   cout << res << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}