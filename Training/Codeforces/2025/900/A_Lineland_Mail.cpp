/**
 *   author:  josuerom
 *   created: 27/09/23 15:37:43
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

const int N = 1e5 + 7;
int a[N];
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   int maxf = 0;
   for (int i = 0; i < n; i++) {
      int mini = 0, maxi = 0;
      if (i == 0) {
         if (a[0] <= 0 && a[n - 1] >= 0) {
            mini = abs(a[0]) + a[1];
            maxi = abs(a[0]) + a[n - 1];
         } else if (a[0] <= 0 && a[n - 1] <= 0) {
            mini = abs(a[0]) - abs(a[1]);
            maxi = abs(a[0]) - abs(a[n - 1]);
         } else {
            mini = a[1] - a[0];
            maxi = a[n - 1] - a[0];
         }
         cout << mini << " " << maxi << endl;
         maxf = maxi;
         continue;
      }
      if (i == n - 1) {
         if (a[i - 1] <= 0 && a[i] >= 0) {
            mini = a[i] + abs(a[i - 1]);
         } else if (a[i - 1] <= 0 && a[i] <= 0) {
            mini = abs(a[i - 1]) - abs(a[i]);
         } else {
            mini = a[i] - a[i - 1];
         }
         cout << mini << " " << maxf << endl;
         continue;
      }
      int minl = 0, minr = 0, maxl = 0, maxr = 0;
      minl = (a[i - 1] <= 0 && a[i] <= 0) ? abs(abs(a[i - 1]) - abs(a[i]))
      : (a[i - 1] <= 0 && a[i] >= 0) ? abs(a[i - 1]) + a[i] : a[i] - a[i - 1];
      minr = (a[i + 1] <= 0 && a[i] <= 0) ? abs(abs(a[i + 1]) - abs(a[i]))
      : (a[i + 1] <= 0 && a[i] >= 0) ? abs(a[i + 1]) + a[i] : a[i + 1] - a[i];
      maxl = (a[0] <= 0 && a[i] <= 0) ? abs(a[0]) - abs(a[i])
      : (a[0] <= 0 && a[i] >= 0) ? abs(a[0]) + a[i] : a[i] - a[0];
      maxr = (a[i] <= 0 && a[n - 1] <= 0) ? abs(a[i]) - abs(a[n - 1])
      : (a[i] <= 0 && a[n - 1] >= 0) ? abs(a[i]) + a[n - 1] : a[n - 1] - a[i];
      cout << min(minl, minr) << " " << max(maxl, maxr) << endl;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
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