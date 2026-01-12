// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 12/03/2024 22:02:59

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

string s, d;
int n, ans = 21, cnt;

void solve() {
   cin >> n >> s;
   for (int i = 1; i < n; i++) {
      cnt = 0;
      cin >> d;
      for (int j = 0; j < d.size(); j++) {
         if (s[j] == d[j]) cnt++;
         else break;
      }
      ans = min(ans, cnt);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}