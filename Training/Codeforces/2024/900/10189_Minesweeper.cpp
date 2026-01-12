#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 2;
char s[N][N];
int m, n, tcase = 1;

int main() {
   while (cin >> m >> n) {
      if (m == 0 && n == 0)
         return 0;
      int ans[102][102];
      for (int i = 0; i <= m; i++)
         memset(ans, 0, sizeof(ans));
      vector<pair<int, int>> vp;
      for (int i = 1; i <= m; i++) {
         for (int j = 1; j <= n; j++) {
            cin >> s[i][j];
            if (s[i][j] == '*') vp.push_back({i, j});
         }
      }
      if (vp.empty()) {
         for (int i = 1, k = 0; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
               cout << ans[i][j];
            }
            cout << "\n";
         }
         return 0;
      }
      for (int c = 0; c < (int) vp.size(); c++) {
         int i = vp[c].first;
         int j = vp[c].second;
         ans[i - 1][j - 1] += 1;
         ans[i][j - 1] += 1;
         ans[i - 1][j + 1] += 1;
         ans[i - 1][j] += 1;
         ans[i + 1][j] += 1;
         ans[i + 1][j - 1] += 1;
         ans[i][j + 1] += 1;
         ans[i + 1][j + 1] += 1;
      }
      cout << "Field #" << tcase++ << ":\n";
      for (int i = 1, k = 0; i <= m; i++) {
         for (int j = 1; j <= n; j++) {
            if (i == vp[k].first && j == vp[k].second) {
               cout << "*"; k++;
               continue;
            }
            cout << ans[i][j];
         }
         cout << "\n";
      }
      cout << "\n";
   }
}