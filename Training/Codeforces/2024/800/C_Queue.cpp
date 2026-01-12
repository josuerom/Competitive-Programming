/**
 *   author:  josuerom
 *   created: 10/10/23 21:13:54
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

queue<int> cl;
int n, x;

void solve() {
   cin >> n;
   if (n == 1) {
      cin >> x;
      cl.push(x);
   } else if (n == 2 && !cl.empty()) {
      cl.pop();
   } else if (n == 3 && !cl.empty()) {
      cout << cl.front() << endl;
   } else if (n == 3 && cl.empty()) {
      cout << "Empty!" << endl;
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