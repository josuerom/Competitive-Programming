/**
 *   author:  josuerom
 *   created: 02/08/23 19:13:52
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

const int N = 107;
int n;
int a[N];

void solve() {
   cin >> n;
   if (n % 2 != 0) {
      cout << "-1\n";
      return;
   }
   for (int i = 1; i <= n; i++) {
      a[i - 1] = i;
   }
   for (int i = 0; i < n; i += 2) {
      swap(a[i], a[i + 1]);
      cout << a[i] << " " << a[i + 1] << " ";
   }
   cout << '\n';
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