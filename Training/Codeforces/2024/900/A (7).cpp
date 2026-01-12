// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 14/03/2024 18:58:15

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

string s, ans;

void solve() {
   cin >> s;
   for (auto &e : s) {
      e = tolower(e);
      if (e == 'a' || e == 'o' || e == 'y' || e == 'e' || e == 'u' || e == 'i')
         continue;
      ans.append(".").push_back(e);
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