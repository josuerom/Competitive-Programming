/**
 *   author:  josuerom
 *   created: 14/07/23 22:44:19
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
   string s1, s2;
   cin >> s1;
   int n = (int) s1.size();
   if (n%2 != 0) {
      cout << "NO\n";
      return;
   }
   s2 = s1.substr(n/2, n);
   s1 = s1.substr(0, n/2);
   cout << (s1.compare(s2) == 0 ? "YES" : "NO") << '\n';
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