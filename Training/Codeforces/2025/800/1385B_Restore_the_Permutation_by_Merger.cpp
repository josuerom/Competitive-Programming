/**
 *   author:  josuerom
 *   created: 05/08/23 21:27:15
**/
#include <bits/stdc++.h>

using namespace std;

void solve() {
   int n;
   cin >> n;
   vector<int> a;
   for (int i = 0; i < (n * 2); i++) {
      int x;
      cin >> x;
      if (i == 0)
         a.push_back(x);
      else {
         bool add = 1;
         int sz = (int) a.size();
         for (int j = 0; j < sz; j++) if (a[j] == x) {
            add = 0;
            break;
         }
         if (add)
            a.push_back(x);
      }
   }
   for (int i = 0; i < n; i++)
      cout << a[i] << " ";
   cout << '\n';
}

int main() {
   int tt = 1;
   cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--)
      solve();
#endif
   return 0;
}