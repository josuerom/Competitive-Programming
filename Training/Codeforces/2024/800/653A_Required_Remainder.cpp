/**
 *   author:  josuerom
 *   created: 21/06/23 13:23:06
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

void solve(int x, int y, int n) {
   int a = n - n%x + y, c = n - n%x - abs(x-y);
   if (a <= 0 || c <= 0) cout << max(a, c) << '\n';
   else if (a > n) cout << c << '\n';
   else if (c > n) cout << a << '\n';
   else cout << max(a, c) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int x, y, n;
      cin >> x >> y >> n;
      solve(x, y, n);
   }
   return 0;
}