// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 12/03/2024 19:11:13

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 2e5;
int a[N], n, b;
bool flag;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   flag = 0;
   for (int i = 0; i < n - 2; i++) {
      if (a[i] < 0) {
         flag = 1;
         break;
      }
      b = a[i];
      a[i] -= b;
      a[i + 1] -= 2 * b;
      a[i + 2] -= b;
   }
   cout << (a[n - 1] != 0 || a[n - 2] != 0 || flag ? "NO" : "YES") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}