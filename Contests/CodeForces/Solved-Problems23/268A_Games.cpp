/**
 *   author:  josuerom
 *   created: 18/02/23 21:36:53
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int n;
   cin >> n;
   int ans = 0, h[n], g[n];
   for (int i = 0; i < n; i++) {
      cin >> h[i] >> g[i];
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (i != j && h[i] == g[j]) ans++;
      }
   }
   cout << ans << '\n';
   return 0;
}
