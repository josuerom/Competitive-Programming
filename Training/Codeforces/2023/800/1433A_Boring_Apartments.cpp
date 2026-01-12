/**
 *   author:  josuerom
 *   created: 21/06/23 15:43:52
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int)(x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

const int MAX = 36;
int a[MAX];
int k = 0;

void fillArray() {
   for (int i = 1; i <= 9; i++) {
      a[k++] = i;
      for (int j = 1; j <= 3; j++) {
         a[k] = (a[k-1] * 10) + i;
         k++;
      }
   }
}

void solve() {
   int x, ans = 0;
   cin >> x;
   for (int i = 0, j = 1; i < 36; i++) {
      ans += j++;
      if (a[i] == x) break;
      if (j == 5) j = 1;
      // debug(ans);
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   fillArray();
   int tt;
   cin >> tt;
   while (tt--) solve();
   return 0;
}