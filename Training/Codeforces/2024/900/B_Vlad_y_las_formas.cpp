/**
 *   author:  josuerom
 *   created: 19/02/24 09:43:24
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int n, curr;
char s;
bool ans;

void solve() {
   cin >> n;
   map<int, int> mp;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         cin >> s;
         if (s == '1') mp[i] += 1;
      }
   }
   auto it = mp.begin();
   curr = it -> second;
   ans = 0;
   for (auto &e : mp)
      ans = e.second == curr;
   cout << (ans ? "SQUARE" : "TRIANGLE") << br;
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