/**
 *   author:  josuerom
 *   created: 22/10/23 01:01:05
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int m;
string s, k;

void solve() {
   cin >> m;
   s = to_string(m);
   k = s;
   reverse(k.begin(), k.end());
   while (k.front() == '0')
      k.erase(k.begin());
   if (s.compare(k) == 0)
      cout << k << br << "YES\n";
   else
      cout << k << br << "NO\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}