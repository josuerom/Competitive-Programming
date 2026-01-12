/**
 *   author:  josuerom
 *   created: 10/10/23 23:43:28
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

struct children {
   int a, b, c;
};
int n, m, x;
queue<children> cl;

void solve() {
   cin >> n >> m;
   for (int i = 1; i <= n; i++) {
      cin >> x;
      cl.push({m, x, i});
   }
   while (cl.size() > 1) {
      if (cl.front().a >= cl.front().b) cl.pop();
      else {
         int x = cl.front().a;
         int y = cl.front().b;
         int z = cl.front().c;
         cl.pop();
         cl.push({x + m, y, z});
      }
   }
   cout << cl.front().c << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
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