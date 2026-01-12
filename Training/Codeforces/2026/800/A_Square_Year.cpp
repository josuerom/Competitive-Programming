/**
 *   author:  josuerom
 *   created: 11/01/26 21:20:08
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

vector<int> a;

void preCalculate(){
   for (int i = 0, inc = 0; inc <= 9999; i++) {
      a.push_back(i * i);
      inc = a.back();
   }
}

void solve() {
   int n;
   cin >> n;
   auto it = lower_bound(a.begin(), a.end(), n);
   if (it != a.end() && *it == n) {
      auto res = distance(a.begin(), it);
      cout << "0 " << res << endl;
      return;
   }
   cout << -1 << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   preCalculate();
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}