/**
 *   author:  josuerom
 *   created: 24/07/23 20:13:02
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

const int N = 107;
char s[N];
char abc[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char a[27], b[27];

void solve() {
   scanf("%s", s);
   int n = strlen(s);
   auto it = find(begin(abc), end(abc), s[0]);
   int x = (distance(begin(abc), it) != 0 ? distance(begin(abc), it) : 0);
   int y = abs(x - 26);
   int ans = min(x, y);
   for (int i = 1; i < n; i++) {
      x = 0, y = 0;
      for (int j = int(s[i - 1]) + 1; j != int(s[i]) + 1; j++) {
         if (j == 123)
            j = 97;
         x++;
      }
      for (int k = int(s[i - 1]) - 1; k != int(s[i]) - 1; k--) {
         y++;
         if (k == 96)
            k = 122;
      }
      ans += min(x, y);
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--)
      solve();
#endif
   return 0;
}