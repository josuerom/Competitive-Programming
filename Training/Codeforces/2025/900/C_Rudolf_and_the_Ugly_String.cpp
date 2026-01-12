/**
 *   author:  josuerom
 *   created: 03/06/24 19:58:17
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n;
string s;

void solve() {
   cin >> n >> s;
   if (!s.find("map") && !s.find("pie"))
      cout << "0\n";
   else {
      int ans = 0;
      for (int i = 0; i <= n - 2; ) {
         if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            ans++;
            i += 3;
         } else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            ans++;
            i += 3;
         } else i++;
      }
      cout << ans << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   int nc = 1;
   while (tt--) {
      cout << "Case #" << nc++ << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}