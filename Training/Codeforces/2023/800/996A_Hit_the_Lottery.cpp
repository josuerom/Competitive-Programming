/**
 *   author:  josuerom
 *   created: 17/02/23 23:59:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   long long n, ans = 0;
   cin >> n;
   if (n>100) {
      ans = n/100;
      n -= ans*100;
   }
   while (n > 0) {
      if (n>=100) ans++;
      else if (n>=20) { n -= 20; ans++; }
      else if (n>=10) { n -= 10; ans++; }
      else if (n>=5) { n -= 5; ans++; }
      else if (n>=1) { n -= 1; ans++; }
   }
   cout << ans << '\n';
   return 0;
}