/**
 *   author:  josuerom
 *   created: 22/09/23 00:01:19
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

const int N = 1e6 + 7;
int a[N];
int n, ones, twos, threes;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 1) ones++;
      else if (a[i] == 2) twos++;
      else threes++;
   }
   int ans = max({ones, twos, threes});
   cout << (n - ans) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
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