/**
 *   author:  josuerom
 *   created: 23/09/23 20:15:11
**/
#include <iostream>
#include <string>

using namespace std;

int main() {
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int a = 0, b = 0;
   while (cin >> a >> b) {
      if (a == 0 && b == 0)
         return 0;
      string x = to_string(a), y = to_string(b);
      int ans = 0;
      for (int i = (int) x.size() - 1; i >= 0; i--) {
         int q = x[i] - '0', w = y[i] - '0';
         if (q + w >= 10)
            ans++;
      }
      if (ans == 0) cout << "No carry operation.\n";
      else if (ans == 1) cout << "1 carry operation.\n";
      else cout << ans << " carry operations.\n";
   }
}