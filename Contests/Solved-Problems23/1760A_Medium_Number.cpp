/****************************************************
* @Author:                josuerom                  *
* @Date:               21/11/22 09:39               *
* @Institute: Minute Of God University Of Colombia  *
****************************************************/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
   vector<int> N(3);
   for (auto &e : N) cin >> e;
   sort(N.begin(), N.end());
   cout << N[1] << endl;
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int t; cin >> t;
   while (t--) solve();
   return 0;
}