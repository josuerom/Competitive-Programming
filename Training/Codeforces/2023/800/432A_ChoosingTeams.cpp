/**
 *  author:  josuerom
 *  created: 20/04/23 00:27:28
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
   freopen("sample/input.in", "r", stdin);
   //freopen("sample/output.ans", "w", stdout);
#endif
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n, k;
   cin >> n >> k;
   vector<int> m(n);
   for (auto &e : m) cin >> e;
   int ans = 0;
   for (int i = 0; i < n; i++) {
      if (m[i]+k <= 5) ans++;
   }
   cout << ans/3 << '\n';
   return 0;
}