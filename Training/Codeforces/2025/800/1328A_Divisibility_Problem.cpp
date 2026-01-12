/**
 *  author:  josuerom
 *  created: 16/02/23 15:36:54
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int a, b, ans;
      cin >> a >> b;
      if (a%b==0) ans = 0;
      else ans = b - a%b;
      cout << ans << '\n';
   }
   return 0;
}