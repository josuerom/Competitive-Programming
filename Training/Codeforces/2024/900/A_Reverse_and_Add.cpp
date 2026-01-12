/**
 *   author:  josuerom
 *   created: 23/09/23 20:43:26
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int tt;
   cin >> tt;
   while (tt--) {
      string n;
      cin >> n;
      unsigned int a = 0, b = 0, c = 0, cnt = 0;
      for (int i = 0; true; i++) {
         a = stoi(n);
         reverse(n.begin(), n.end());
         b = stoi(n);
         c = a + b;
         n = to_string(c);
         string m = n;
         reverse(m.begin(), m.end());
         cnt++;
         if (n == m) break;
      }
      cout << cnt << " " << c << endl;
   }
   return 0;
}