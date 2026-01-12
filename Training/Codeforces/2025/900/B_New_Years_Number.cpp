/**
 *   author:  josuerom
 *   created: 11/09/23 12:25:35
**/
#include <bits/stdc++.h>

using namespace std;

void precalculate(vector<int> &a) {
   for (int i = 2, y = 4041; true; i++) {
      for (int j = 0; j < i; j++) {
         if (y + j <= 1e6) a.push_back((y + j));
         else return;
      }
      y += 2020;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1", "r", stdin);
   freopen("/samples/output", "w", stdout);
#endif
   vector<int> a;
   precalculate(a);
   int tt = 1;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      if (n < 2020) {
         cout << "NO\n";
         continue;
      }
      if (n % 2020 == 0 || n % 2021 == 0) {
         cout << "YES\n";
         continue;
      }
      cout << (binary_search(a.begin(), a.end(), n) ? "yes" : "no") << endl;
   }
   return 0;
}