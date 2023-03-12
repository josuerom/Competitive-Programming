/*
 *   author:  josuerom
 *   created: 29/11/22 20:01:54
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("popcnt")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#ifdef josuerom
  #include <cp/debug.h>
#else
  #define debug(...)
  #define PR(...)
  #define PR0(...)
#endif
 
using namespace std;
 
#define FOR(i, l, r) for(int i = (l); i <= (r); ++i)
#define FOD(i, r, l) for(int i = (r); i >= (l); --i)
#define fi first
#define se second
#define bit(x, k) (1ll&((x) >> (k)))
#define on(x, k) ((x)|(1ll << (k)))
#define off(x, k) ((x)&~(1ll << (k)))
#define sz(a) ((int)a.size())

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int maxn = 1e5 + 11;
int a[maxn], maxL[maxn], maxR[maxn];

void solve() {
  int n; cin >> n; 
  for(int i = 1; i <= n; i++) {
    cin >> a[i]; 
  }
  maxL[0] = maxR[n + 1] = 0;
  for(int i = 1; i <= n; i++) {
    maxL[i] = max(maxL[i - 1], a[i]);
  }
  for(int i = n; i >= 1; i--) {
    maxR[i] = max(maxR[i + 1], a[i]);
  }
  for(int i = 1; i <= n; i++) {
    if(a[i] < maxL[i - 1] && a[i] < maxR[i + 1]) {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int tc; cin >> tc;
  while(tc--) {
    solve();
  }
  return 0;
}