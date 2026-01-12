/**
 *   author:  josuerom
 *   created: 24/07/23 19:33:13
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
   int a, b;
   cin >> a >> b;
   if (a == b)
      cout << "0\n";
   else if (a > b)
      cout << ((a-b)%2 == 0 ? 1 : 2) << '\n';
   else
      cout << ((b-a)%2 != 0 ? 1 : 2) << '\n';
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