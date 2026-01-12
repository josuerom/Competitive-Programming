/**
 *   author:  josuerom
 *   created: 07/05/23 16:20:32
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
   int s, n;
   cin >> s >> n;
   vector<pair<int, int>> f(n);
   for (auto &e : f) {
      cin >> e.first >> e.second;
   }
   sort(f.begin(), f.end());
   bool ans = true;
   for (auto &e : f) {
      if (s > e.first) s += e.second;
      else { ans = false; break; }
   }
   cout << (ans ? "YES" : "NO") << '\n';
   return 0;
}