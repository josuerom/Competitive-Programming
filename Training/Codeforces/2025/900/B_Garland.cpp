/**
 *   author:  josuerom
 *   created: 26/11/23 19:05:32
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

const int N = 1e3 + 10;
char s1[N], s2[N];
int n1, n2, ans;
vector<int> a(26), b(26);

void solve() {
   cin >> s1 >> s2;
   n1 = strlen(s1), n2 = strlen(s2);
   for (int i = 0; i < n1; i++)
      a[s1[i] - 'a'] += 1;
   for (int i = 0; i < n2; i++)
      b[s2[i] - 'a'] += 1;
   for (int i = 0; i < 26; i++) {
      if (b[i] > 0 && a[i] == 0) {
         cout << "-1\n";
         return;
      }
      ans += min(a[i], b[i]);
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   // cin >> tt;
   while (tt--) {
#ifdef DEBUG
      cout << "Case #" << ++nc << ":\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}