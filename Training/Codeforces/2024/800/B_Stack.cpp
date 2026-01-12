/**
 *   author:  josuerom
 *   created: 10/10/23 20:34:54
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

int n, m;
stack<int> pl;

void solve() {
   cin >> n;
   if (n == 1) {
      cin >> m;
      pl.push(m);
      return;
   } else if (n == 2 && !pl.empty()) {
      pl.pop();
      return;
   } else if (n == 3 && !pl.empty()) {
      cout << pl.top() << endl;
      return;
   } else if (n == 3 && pl.empty()) {
      cout << "Empty!" << endl;
      return;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}