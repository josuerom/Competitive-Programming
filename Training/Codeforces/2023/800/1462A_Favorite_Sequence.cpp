/**
 *   author:  josuerom
 *   created: 28/07/23 10:07:23
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

const int N = 307;
int a[N];
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   if (n == 1) {
      cout << a[0] << '\n';
      return;
   }
   for (int i = 0, j = n - 1, k = 1; k <= j; i++) {
      if (i == 0)
         cout << a[i] << " ";
      else if (i%2 != 0) {
         cout << a[j] << " ";
         j--;
      } else {
         cout << a[k] << " ";
         k++;
      }
   }
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