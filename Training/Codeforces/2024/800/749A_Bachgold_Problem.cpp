/**
 *   author:  josuerom
 *   created: 18/07/23 16:31:23
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define ull unsigned long long int
#define ll long long int
#define mp make_pair
#define se second
#define fi first

void solve() {
   int n;
   cin >> n;
   if (n == 2 || n == 3)
      cout << "1\n" << n << '\n';
   else {
      int m = n / 2;
      if (n%2 == 0) {
         cout << m << '\n';
         for (int i = 0; i < m; i++)
            cout << "2 ";
         cout << '\n';
      } else {
         cout << m << '\n';
         for (int i = 0; i < m - 1; i++)
            cout << "2 ";
         cout << "3\n";
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++)
   {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--)
      solve();
#endif
   return 0;
}