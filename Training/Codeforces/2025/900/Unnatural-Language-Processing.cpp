// author:  josuerom
// created: 24/03/2024 00:36:00

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

string s;
int n, x;

void solve() {
   cin >> n;
   vector<int> v;
   s = "";
   for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      if (c == 'a' || c == 'e') v.push_back(i + 1);
      s += c;
   }
   if (n <= 3) {
      cout << s << br;
      return;
   } 
   string ans = "";
   x = 0;
   for (int i = 0, m = 0; i < v.size() - 1; i++) {
      m = v[i + 1] - v[i];
      while (m--) ans += s[x++];
      ans.append(".");
   }
   while (x < n) ans += s[x++];
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
