/**
 *   author:  josuerom
 *   created: 24/09/23 17:52:14
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

char s[10];

void solve() {
   cin >> s;
   if (s[0] != '1') {
      cout << "NO\n";
      return;
   }
   bool ans = 1;
   int n = strlen(s);
   for (int i = 0, c = 0; i < n; i++) {
      if (s[i] == '4') ++c;
      if (s[i] == '1') c = 0;
      if ((s[i] != '1' && s[i] != '4') || (c > 2)) {
         ans = 0;
         break;
      }
   }
   cout << (ans ? "YES" : "NO") << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
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