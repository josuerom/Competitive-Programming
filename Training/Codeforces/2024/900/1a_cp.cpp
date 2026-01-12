// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 09/03/2024 21:25:10

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, x, ans;

void solve() {
   cin >> n;
   ans = 0;
   for (int i = 0; i < n; i++) {
      cin >> x;
      ans += abs(x);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
