/**
 *   author:  josuerom
 *   created: 27/11/2022 19:22:45
**/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
string ans = "";

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   cin >> n;
   for (int i = 1; i <= n; i++) {
      if (i==n) ans += (i%2==0 ? "I love it" : "I hate it");
      else if (i%2==0) ans += "I love that ";
      else ans += "I hate that ";
   }
   cout << ans << endl;
   return 0;
}