/**
 *   author:  josuerom
 *   created: 03/06/24 18:55:42
**/
#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = int(2e5) + 10;
int a[N], n;

void solve() {
   cin >> n;
   int zeros = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) zeros++;
   }
   vector<char> ans(n);
   char l = 'a', r = 'z';
   while(zeros--) {
      int k = 0;
      for (int i = 0; i < n; i++) {
         if (a[i] == k) {
            a[i] = -1;
            ans[i] = l;
            k++;
         }
      }
      if (l == r) l = 'a';
      else l++;
   }
   for (int i = 0; i < n; i++) cout << ans[i];
   cout << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   int nc = 1;
   while (tt--) {
      cout << "Case #" << nc++ << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}