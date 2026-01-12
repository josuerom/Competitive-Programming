/**
 *   author:  josuerom
 *   created: 25/07/23 21:39:17
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

int n, x;
int ce, co;

void solve() {
   ce = 0, co = 0;
   cin >> n;
   for (int i = 0; i < n * 2; i++) {
      cin >> x;
      if (x%2 == 0) ce++;
      else co++;
   }
   cout << ((ce == n && co == n) ? "Yes" : "No") << '\n';
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