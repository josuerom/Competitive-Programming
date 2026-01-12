// author:  josuerom
// created: 22/03/2024 11:35:09

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e2;
int n, a, b, x;
int ans[N];

void solve() {
   cin >> n >> a >> b;
   for (int i = 0; i < a; i++) {
      cin >> x;
      ans[x] = 1;
   }
   for (int i = 0; i < b; i++) {
      cin >> x;
      if (ans[x] == 1) continue;
      ans[x] = 2;
   }
   for (int i = 1; i <= n; i++) {
      if (ans[i] == 1) cout << "1 ";
      else if (ans[i] == 2) cout << "2 ";
   }
   cout << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}