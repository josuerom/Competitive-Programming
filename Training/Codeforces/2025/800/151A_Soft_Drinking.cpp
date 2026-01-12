/**
 *  author:  josuerom
 *  created: 17/04/23 00:18:12
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
   int n, k, l, c, d, p, nl, np, ans = 0;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   ans = min((k*l)/nl, c*d);
   ans = min(ans, p/np) / n;
   cout << ans << '\n';
   return 0;
}