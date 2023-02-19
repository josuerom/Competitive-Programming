/**
 *   author:  josuerom
 *   created: 18/02/23 21:20:19
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int n;
   cin >> n;
   int a[1005];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans = 0, max = a[0], min = a[0];
   for(int j = 1; j < n; j++) {
      if(a[j] > max) {
         max = a[j];
         ans++;
      }
      if(a[j] < min) {
         min = a[j];
         ans++;
      }
   }
   cout << ans;
   return 0;
}
