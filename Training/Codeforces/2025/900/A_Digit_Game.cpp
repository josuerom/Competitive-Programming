/**
 *   author:  josuerom
 *   created: 21/10/23 19:31:12
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define long  long long
#define endl  '\n'

const int N = 1e3 + 7;
char s[N];
int n;

void solve() {
   cin >> n >> s;
   bool ans = 1;
   if (n % 2 == 0) {
      for (int i = 1; i < n; i+=2) {
         if ((s[i] - '0') % 2 == 0) {
            ans = false;
            break;
         }
      }
   } else {
      ans = 0;
      for (int i = 0; i < n; i+=2) {
         if ((s[i] - '0') % 2 != 0) {
            ans = true;
            break;
         }
      }
   }
   cout << (ans ? "1" : "2") << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
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