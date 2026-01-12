/**
 *  author:  josuerom
 *  created: 16/04/23 22:42:23
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
   int tt;
   cin >> tt;
   while (tt--) {
      int a, b, ans = 0;
      cin >> a >> b;
      if (a!=b) ans = (abs(a-b)%10!=0 ? 1 + abs(a-b)/10 : abs(a-b)/10);
      cout << ans << '\n';
   }
   return 0;
}