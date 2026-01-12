/**
 *   author:  josuerom
 *   created: 28/07/23 13:38:59
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

const int N = 1e5 + 7;
int a[N];
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) 
      cin >> a[i];
   int cnt = 1, ans = 1;
   for (int i = 0; i < n - 1; i++) {
      if (a[i] < a[i + 1])
         cnt++;
      else
         cnt = 1;
      ans = max(ans, cnt);
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
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