/**
 *   author:  josuerom
 *   created: 21/04/24 16:16:24
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

const int N = 10 + 100;
int n, m;
char s[N][N], c;

void solve() {
   cin >> n >> m;
   vector<pair<int, int>> vp;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
         cin >> c;
         s[i][j] = c;
         if (c == '*') vp.push_back({i, j});
      }
   }
   int i = 0, j = 0;
   if (vp[0].first == vp[1].first)
      // Como estarán los dos primero * en la misma fila
      i = vp[2].first,
      j = vp[2].second == vp[0].second ? vp[1].second : vp[0].second; 
   else
      i = vp[0].first,
      j = vp[0].second == vp[1].second ? vp[2].second : vp[1].second; 
   cout << i <<" "<< j << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 1;
   // cin >> tt;
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