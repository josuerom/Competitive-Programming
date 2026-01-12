// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 20/03/2024 10:47:33

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e3;
int n, k, a[N], add, ans;

void solve() {
   cin >> n >> k;
   for (int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   int i = 0;
   while ((a[i] + add) <= k && i < n) {
      ans++, add += a[i++];
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}