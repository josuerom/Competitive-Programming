/**
 *   author:  josuerom
 *   created: 11/09/23 22:15:42
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int n, zeros = 0;
   cin >> n;
   for (int i = 0; i < n; i++) {
      char c; cin >> c;
      if (c == '0')
         zeros++;
   }
   cout << abs(zeros - (n - zeros)) << endl;
   return 0;
}