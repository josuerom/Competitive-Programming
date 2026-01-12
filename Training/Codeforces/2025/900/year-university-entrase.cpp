// author:  josuerom
// created: 22/03/2024 13:35:44

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10;
int n, a[N];

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   if (n == 1) cout << a[0] << br;
   else if (n == 3) cout << a[1] << br;
   else cout << a[2] << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
