/**
 *   author:  josuerom
 *   created: 23/09/23 19:59:45
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

void solve(int &n, int &m) {
   vector<pair<int, int>> minas;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         char c; cin >> c;
         if (c == '*')
            minas.pb(mp(i, j));
      }
   }
   vector<pair<int, int>> campo(8 * minas.size());
   for (int i = 0; i < (int) minas.size(); i++) {
      int x = minas[i].fi, y = minas[i].se;
      campo.pb(mp(x, y + 1));
      campo.pb(mp(x, y - 1));
      campo.pb(mp(x + 1, y));
      campo.pb(mp(x - 1, y));
      campo.pb(mp(x - 1, y + 1));
      campo.pb(mp(x + 1, y + 1));
      campo.pb(mp(x - 1, y - 1));
      campo.pb(mp(x + 1, y - 1));
   }
   vector<vector<int>> ans(n, vector<int>(m, 0));
   for (auto &e : campo) {
      int x = e.fi, y = e.se;
      if ((x >= 0 && x < n) && (y >= 0 && y < m))
         ans[x][y] += 1;
   }
   for (int i = 0, l = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         if (minas[l].fi == i && minas[l].se == j) {
            printf("*");
            l++;
         } else
            printf("%d", ans[i][j]);
      }
      printf("\n");
   }
}

int main() {
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int n = 0, m = 0, c = 1;
   while (cin >> n >> m) {
      if (n == 0 && m == 0)
         return 0;
      printf("Field #%d:\n", c++);
      solve(n, m);
      printf("\n");
   }
}