/**
 *   author:  josuerom
 *   created: 14/10/23 21:51:55
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define long  long long
#define endl  '\n'

char board[11][11];

void solve() {
   vector<pair<int, int>> vp(6);
   for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
         cin >> board[i][j];
         if (board[i][j] == 'X') {
            if (i == 1 || j == 1 || i == 10 || j == 10) {
               vp[1].first = 1;
               vp[1].second += 1;
            } else if ((i == 2 && j >= 2 && j <= 9) || (j == 2 && i >= 2 && i <= 9) ||
            (i == 9 && j >= 2 && j <= 9) || (j == 9 && i >= 2 && i <= 9)) {
               vp[2].first = 2;
               vp[2].second += 1;
            } else if ((i == 3 && j >= 3 && j <= 8) || (j == 3 && i >= 3 && i <= 8) ||
            (i == 8 && j >= 3 && j <= 8) || (j == 8 && i >= 3 && i <= 8)) {
               vp[3].first = 3;
               vp[3].second += 1;
            } else if ((i == 4 && j >= 4 && j <= 7) || (j == 4 && i >= 4 && i <= 7) ||
            (i == 7 && j >= 4 && j <= 7) || (j == 7 && i >= 4 && i <= 7)) {
               vp[4].first = 4;
               vp[4].second += 1;
            } else if ((i == 5 && j >= 5 && j <= 6) || (j == 5 && i >= 5 && i <= 6) ||
            (i == 6 && j >= 5 && j <= 6) || (j == 6 && i >= 5 && i <= 6)) {
               vp[5].first = 5;
               vp[5].second += 1;
            }
         }
      }
   }
   int ans = 0;
   for (int i = 1; i <= 5; i++)
      ans += vp[i].first * vp[i].second;
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}