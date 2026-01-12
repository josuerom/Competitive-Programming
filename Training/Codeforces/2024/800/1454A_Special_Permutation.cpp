/**
 *   author:  josuerom
 *   created: 25/07/23 23:16:03
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
int a[N];
int n;

void solve() {
   cin >> n;
   for (int i = n, j = 0; i >= 1; i--, j++) {
      a[j] = i;
   }
   if (n%2 != 0) {
      swap(a[n / 2], a[n / 2 + 1]);
   }
   for (int i = 0; i < n; i++)
      cout << a[i] << " ";
   cout << '\n';
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