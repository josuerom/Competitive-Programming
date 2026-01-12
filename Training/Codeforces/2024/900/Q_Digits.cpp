/**
-*   author:  josuerom
-*   created: 27/10/23 16:05:37
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

string s;

void solve() {
   cin >> s;
   reverse(s.begin(), s.end());
   for (int i = 0; i < s.size(); i++)
      cout << s[i] << " \n"[i == s.size() - 1];
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}
