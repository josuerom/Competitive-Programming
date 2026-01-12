/**
 *   author:  josuerom
 *   created: 28/07/23 10:35:25
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

const int N = 2007;
int a[N];
int n;

void solve() {
   cin >> n;
   int cnt = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i]%2 == 0)
         cnt++;
   }
   if (n == 1 && a[0]%2 == 0) {
      cout << "NO\n";
      return;
   }
   if (n == 1 && a[0]%2 != 0) {
      cout << "YES\n";
      return;
   }
   if (cnt == 0) {
      int sum = accumulate(a, a + n, 0);
      cout << (sum%2 != 0 ? "YES" : "NO") << '\n';
      return;
   }
   cout << (cnt == n ? "NO" : "YES") << '\n';
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
   while (tt--)
      solve();
#endif
   return 0;
}