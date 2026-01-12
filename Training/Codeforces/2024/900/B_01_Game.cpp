/**
 *   author:  josuerom
 *   created: 25/09/23 10:17:23
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

const int N = 107;
char s[N];
int n;

void solve() {
   cin >> s;
   n = strlen(s);
   int zeros = 0, ones = 0;
   for (int i = 0; i < n; i++){
      if (s[i] == '0') zeros++;
      else ones++;
   }
   if (zeros == 0 || ones == 0) {
      cout << "NET\n";
      return;
   }
   if ((ones <= zeros && ones % 2 != 0) || (zeros <= ones && zeros % 2 != 0)) {
      cout << "DA\n";
      return;
   }
   cout << "NET\n";
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