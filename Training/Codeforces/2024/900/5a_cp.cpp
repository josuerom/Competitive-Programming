// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 11/03/2024 13:22:03

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n;
string s;
char O = '1', P = '0';

void solve() {
   cin >> n >> s;
   bool flag = 1;
   for (int j = 0; j < n; j++) {
      if (s[j] != '1' && s[j] != '0') {
         char r = (char) (flag ? O : P);
         replace(s.begin(), s.end(), s[j], r);
         flag = !flag;
      }
   }
   for (auto &e: s) cout << e << " ";
   cout << br;
   string o = "00", p = "11";
   auto it1 = search(s.begin(), s.end(), o.begin(), o.end());
   auto it2 = search(s.begin(), s.end(), p.begin(), p.end());
   cout << (it1 == s.end() && it2 == s.end() ? "YES" : "NO") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
