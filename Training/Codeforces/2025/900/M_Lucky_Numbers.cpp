/**
 *   author:  josuerom
 *   created: 22/10/23 01:39:50
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

int a, b, n;
string s;
bool flag;

void solve() {
   cin >> a >> b;
   for (int i = a; i <= b; i++) {
      s = to_string(i);
      n = s.size();
      int c4 = count(s.begin(), s.end(), '4');
      int c7 = count(s.begin(), s.end(), '7');
      if ((c4 + c7) == n) {
         cout <<" "<< i; flag = 1;
      }
   }
   if (!flag) cout << "-1\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}