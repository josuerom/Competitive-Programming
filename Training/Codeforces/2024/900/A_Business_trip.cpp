/**
 *   author:  josuerom
 *   created: 12/09/23 17:27:29
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll    long long int
#define pb    push_back
#define mp    make_pair
#define se    second
#define fi    first

int k;
int a[12];

void solve() {
   cin >> k;
   for (int i = 0; i < 12; i++)
      cin >> a[i];
   if (k == 0) {
      cout << "0\n";
      return;
   }
   sort(a, a+12);
   int c = 0;
   for (int i = 0, j = 11; i < 12; i++, j--) {
      c += a[j];
      if (c >= k) {
         cout << (i + 1) << endl;
         return;
      }
   }
   cout << "-1\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int tt = 1;
   // cin >> tt;
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