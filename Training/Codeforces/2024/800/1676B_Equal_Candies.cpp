/**
 *   author:  josuerom
 *   created: 25/07/23 20:57:40
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

const int N = 57;
ll a[N];
ll n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);
   ll ans = 0;
   for (int j = 1; j < n; j++)
      ans += (a[j] - a[0]);
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
   while (tt--)
      solve();
#endif
   return 0;
}