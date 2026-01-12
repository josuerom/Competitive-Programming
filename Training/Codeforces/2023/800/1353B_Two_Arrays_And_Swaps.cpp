/**
 *   author:  josuerom
 *   created: 09/06/23 00:20:52
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "debug.h"
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, k;
      cin >> n >> k;
      vector<int> a(n), b(n);
      for (auto &e : a) cin >> e;
      for (auto &e : b) cin >> e;
      sort(all(a));
      sort(rall(b));
      int ans = 0;
      for (int i = 0, j = 0; i < n; i++) {
         if (b[i] > a[j] && k > 0) {
            swap(a[i], b[i]);
            k--; j++;
         }
         ans += a[i];
      }
      cout << ans << '\n';
   }
   return 0;
}