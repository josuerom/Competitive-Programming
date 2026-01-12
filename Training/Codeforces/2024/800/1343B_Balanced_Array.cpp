/**
 *  author:  josuerom
 *  created: 06/05/23 20:12:53
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      long long n;
      cin >> n;
      if (n%4 == 0) {
         cout << "YES\n";
         long long x = n/4, ans = 0;
         long long sum = (n * (n+1)/2) - (x * n);
         for (int i = 2; i <= n; i+=2) {
            cout << i << " ";
         }
         for (int i = 0, j = 1; i < (n/2)-1; i++, j+=2) {
            ans += j;
            cout << j << " ";
         }
         cout << (sum-ans) << '\n';
      } else cout << "NO\n";
   }
   return 0;
}