/**
 *   author:  josuerom
 *   created: 05/11/23 13:21:05
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
int n;

void solve() {
   cin >> n >> s;
   if (n == 1 || is_sorted(s.begin(), s.end())) {
      cout << "0\n";
      return;
   }
   int ans = 0;
   cout << ans << br;
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
/*
8
1
1
2
10
3
101
4
1100
5
11001
6
100010
10
0000110000
7
0101010

*/