// author:  josuerom
// created: 23/03/2024 22:01:45

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n, k, ans;

void solve() {
   cin >> n >> k;
   if (k > n) ans = k - n;
   else if ((n % 2 == 0 && k % 2 == 0) || (n % 2 == 1 && k % 2 == 1)) ans = 0; 
   else ans = 1;
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
