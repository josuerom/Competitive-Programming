// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 27/03/2024 20:14:34

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e5;
int a[N], n, sum;
bool ans;

void solve() {
   cin >> n;
   sum = 0;
   ans = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
   }
   if (sum % 3 == 0) {
      cout << "0\n";
      return;
   }
   if (n == 1) {
      cout << "1\n";
      return;
   }
   for (int i = 0; i < n; i++) {
      if ((sum - a[i]) % 3 == 0) {
         ans = 1;
         break;
      }
   }
   if (ans || (sum + 1) % 3 == 0) cout << "1\n";
   else cout << "2\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}