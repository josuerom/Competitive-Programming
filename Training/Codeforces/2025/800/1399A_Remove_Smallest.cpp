/**
 *  author:  josuerom
 *  created: 07/04/23 22:38:13
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "data/debug.h"
#else
#define debug(...) 42
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("sample/inp.in", "r", stdin);
   //freopen("sample/out.ans", "w", stdout);
#endif
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      if (n==1 || n==2) {
         cout << "YES" << '\n';
         continue;
      }
      vector<int> a(n);
      for (auto &e : a) cin >> e;
      sort(a.begin(), a.end());
      auto it = unique(a.begin(), a.end());
      a.erase(it, a.end());
      cout << (a.size()<=2 ? "YES" : "NO") << '\n';
   }
   return 0;
}