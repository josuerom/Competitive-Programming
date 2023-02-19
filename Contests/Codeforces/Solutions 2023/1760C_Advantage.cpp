/****************************************************
* @Author:                josuerom                  *
* @Date:               21/11/22 11:46               *
* @Institute: Minute Of God University Of Colombia  *
****************************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
   int n, j = 0, k = 0;
   cin >> n;
   vector<int> P(n), Z(n), ans(n);
   for (auto &e : P) cin >> e;
   for (int i = 0; i < n; i++) Z[i] = P[i];
   sort(Z.rbegin(), Z.rend());
   for (int i = 0; i < n; i++) {
      if (P[i] == Z[j]) {
         ans[k++] = P[i]-Z[j+1];
      } else {
         ans[k++] = P[i]-Z[j];
      }
   }
   for (int i = 0; i < n; i++) {
      if (i < n-1) cout << ans[i] << ' ';
      else cout << ans[i] << endl;
   }
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int t; cin >> t;
   while (t--) solve();
   return 0;
}