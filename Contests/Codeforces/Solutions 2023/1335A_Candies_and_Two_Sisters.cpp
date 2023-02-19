/**
 *   author:  josuerom
 *   created: 18/02/23 12:57:06
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, ans;
      cin >> n;
      if (n!=1 && n!=2) {
         ans = n/2;
         cout << (n%2==0 ? ans-1 : ans) << '\n';
      } else cout << 0 << '\n';
   }
   return 0;
}