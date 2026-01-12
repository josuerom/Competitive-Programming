// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 10/03/2024 14:25:11

#include <bits/stdc++.h>
using namespace std;

#define ll  unsigned long long
#define br  '\n'

ll n;

void solve() {
   cin >> n;
   if (n <= 6LL) {
      cout << "15\n";
      return;
   }
   ll ans = 0;
   if (n % 2LL == 0LL) ans = (ll) n * 2.5;
   else ans = (ll) (n + 1) * 2.5;
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
