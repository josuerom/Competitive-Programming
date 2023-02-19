/***************************************************
 * @author:              josuerom                  *
 * @created:          21/11/22 21:37               *
***************************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int t, n; cin >> t;
   while (t--) {
      cin >> n;
      vector<int> a(n);
      for (auto &e : a) cin >> e;
      bool valle = false;
      if (n>2) {
         for (int i = 0; i < n-2; i++) {
            if (a[i]<a[i+1] && a[i+1]>a[i+2]) { valle = true; break; }
            else if (a[i]>=n) { valle = true; break; }
         }
         cout << (valle ? "NO" : "YES") << endl;
      } else cout << "YES" << endl;
   }
   return 0;
}