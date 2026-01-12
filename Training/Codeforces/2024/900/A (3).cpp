// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 01/03/2024 15:01:35

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

ll n, a, sum;

void solve() {
   cin >> n;
   sum = 0;
   for (ll i = 0; i < n; i++) {  
      cin >> a;
      sum += a;
   }
   a = (ll) sqrt(sum);
   cout << (a * a == sum ? "YES" : "NO") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}