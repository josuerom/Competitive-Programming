/**
 *   author:  josuerom
 *   created: 12/07/23 21:59:32
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

void solve() {
   int n;
   cin >> n;
   vector<int> a(n);
   vector<int> rep(1007, 0);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      rep[a[i]] += 1;
   }
   sort(all(rep));
   if (rep[1006] > 1) {
      cout << "0\n";
      return;
   }
   int ans = 1007;
   sort(all(a));
   for (int i = 0; i < n - 1; i++)
      ans = min(ans, abs(a[i] - a[i+1]));
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}