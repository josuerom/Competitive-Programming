/**
 *   author:  josuerom
 *   created: 14/04/24 21:34:16
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

const int N = 10 + 1e5;
char s[N];
int n, k;

void solve() {
   cin >> n >> k >> s;
   multiset<char> ms;
   set<char> st;
   for (int i = 0; i < n; i++) {
      ms.insert(s[i]);
      st.insert(s[i]);
   }
   int cnt = 0;
   string ss;
   for (auto &e : st) {
      cnt +=  ms.count(e) % 2 == 1;
   }
   cout << (cnt <= k + 1 ? "Yes" : "No") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 1;
   cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << nc++ << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}