/**
 *   author:  josuerom
 *   created: 10/10/23 21:01:57
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

int n, d, x;
queue<int> cl;

void solve() {
   cin >> n >> d;
   for (int i = 0; i < n; i++) {
      cin >> x;
      cl.push(x);
   }
   for (int i = 0; i < d; i++) {
      x = cl.front();
      cl.pop();
      cl.push(x);
   }
   while (!cl.empty()) {
      cout << cl.front() << " ";
      cl.pop();
   }
   cout << endl;
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