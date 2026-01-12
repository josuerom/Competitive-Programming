/**
 *   author:  josuerom
 *   created: 25/09/23 13:15:03
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

int a[51] = {
   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 19, 29, 39, 49, 59, 69, 79, 89, 189, 289, 389,
   489, 589, 689, 789, 1789, 2789, 3789, 4789, 5789, 6789, 16789, 26789,
   36789, 46789, 56789, 156789, 256789, 356789, 456789, 1456789, 2456789,
   3456789, 13456789, 23456789, 123456789, -1, -1, -1, -1, -1
};

void solve() {
   int n;
   cin >> n;
   cout << a[n] << endl;
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