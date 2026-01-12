/**
 *   author:  josuerom
 *   created: 29/04/24 12:23:31
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n;
string d, s;

void solve() {
   cin >> n >> d >> s;
   if (s[0] < d[0]) {
      cout << d << s << br;
      return;
   }
   string r = "";
   unordered_map<char, bool> mp;
   vector<int> memo;
   for (int i = 0; i < n; i++) {
      if (mp[s[i]]) continue;
      r.push_back(s[i]);
      memo.push_back(i);
      mp[s[i]] = true;
   }
   int ip = 0;
   for (int i = 0; i < r.size(); i++) {
      if (r[i] < d[0]) {
         ip = i;
         break;
      }
   }
   string r1 = s[0] + d + s.substr(1); 
   string r2 = s.substr(0, memo[ip] + 1) + d + s.substr(memo[ip] + 1);
   string r3 = s.substr(0, memo[ip]) + d + s.substr(memo[ip]);
   string r4 = s.substr(0, n - 1) + d + s[n - 1];
   string r5 = s + d;
   // cout << r1 << "-" << r2 << "-" << r3 << "-" << r4 << "-" << r5 << br;
   cout << max({r1, r2, r3, r4, r5}) << br;
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