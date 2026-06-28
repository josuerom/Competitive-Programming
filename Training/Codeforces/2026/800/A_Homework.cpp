/**
 *   author:  josuerom
 *   created: 28/06/26 13:04:56
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define uint  unsigned int

int na, nb;
string a, b, c;

void solve() {
   cin >> na >> a >> nb >> b >> c;
   for (int i = 0; i < nb; i++) {
      if (c[i] == 'V') a.insert(a.begin(), b[i]);
      else a.push_back(b[i]);
   }
   cout << a << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}