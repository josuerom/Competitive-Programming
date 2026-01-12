/**
 *   author:  josuerom
 *   created: 13/09/23 14:37:41
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

int n;
string s;

void solve() {
   cin >> n >> s;
   map<string, int> mp;
   for (int i = 0; i < n - 1; i++) {
      string x = s.substr(i, 2);
      mp[x] += 1;
   }
   string ans = s.substr(0, 2);
   int m = 0;
   for (auto &e : mp) {
      if (e.se > 1 && e.se >= m) {
         ans = e.fi;
         m = e.se;
      }
   }
   cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
     cout << "--- Case #" << nc << " ---\n";
     solve();
#else
     solve();
#endif
   }
   return 0;
}
