/**
 *   author:  josuerom
 *   created: 05/07/23 14:56:32
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

void solve() {
   string s;
   cin >> s;
   int n = (int) s.size();
   if (n == 1) cout << "1\n" << s << '\n';
   else {
      int distinct = 0;
      for (int i = 0; i < n; i++) if (s[i] != '0') {
         distinct++;
      }
      cout << distinct << '\n';
      string ans;
      for (int i = 0; i < n; i++) {
         ans.clear();
         if (s[i] != '0') {
            ans += s[i];
            for (int j = (i + 1); j < n; j++)
               ans += '0';
            cout << ans << " ";
         }
      }
      cout << '\n';
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}