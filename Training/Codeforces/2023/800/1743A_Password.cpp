/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;

void solve() {
   int size;
   cin >> size;
   int vec[size];
   for (auto& e : vec) cin >> e;
   int amount = 10-size, b = (amount-1)*6, a = b;
   if (a > 6) {
      for (int i = 0; i < (amount-2); i++) {
         a += b-6;
         b -= 6;
      }
      cout << a << "\n";
      return;
   } else {
      cout << a << "\n";
   }
}

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   short t=1; cin >> t;
   while (t--) solve();
   return 0;
}