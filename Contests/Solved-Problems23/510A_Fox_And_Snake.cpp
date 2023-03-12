/**
 *   author:  josuerom
 *   created: 18/02/23 13:35:51
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int n, m;
   cin >> n >> m;
   char snake[n][m];
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         snake[i][j] = '#';
      }
   }
   for (int i = 1, aux = 1; i < n; i+=2, aux++) {
      if (aux%2!=0) {
         for (int l = 0; l < m-1; l++) snake[i][l] = '.';
      } else {
         for (int l = 1; l < m; l++) snake[i][l] = '.';
      }
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         cout << snake[i][j];
      }
      cout << '\n';
   }
   return 0;
}