/**
 *   author:  josuerom
 *   created: 05/11/23 09:42:56
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

const int N = 2e2 + 10;
char s[N];
int n;

void solve() {
   cin >> n;
   int cx = 0, cX = 0;
   for (int i = 0; i < n; i++) {
      cin >> s[i];
      if (s[i] == 'x') cx++;
      if (s[i] == 'X') cX++;
   }
   if (cx == n / 2 && cX == n / 2) {
      cout << 0 << br << s << br;
      return;
   }
   int d = max(cx, cX) - n / 2, i = 0, stop = 0;
   while (stop < d) {
      if (max(cx, cX) == cX && s[i++] == 'X')
         s[i - 1] = 'x', stop++;
      else if (max(cx, cX) == cx && s[i++] == 'x')
         s[i - 1] = 'X', stop++;
   }
   cout << d << br << s << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   // cin >> tt;
   while (tt--) {
#ifdef LOCAL
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}