/**
 *  author:  josuerom
 *  created: 26/04/23 17:33:14
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
      int n;
      cin >> n;
      vector<int> a(n);
      for (auto &e : a) cin >> e;
      // Write solution
   }
   return 0;
}