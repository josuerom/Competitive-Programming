/**
 *   author:  josuerom
 *   created: 25/09/23 09:38:42
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

ll n;

void solve() {
   cin >> n;
   cout << n << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "--- Case #" << nc << " ---\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}