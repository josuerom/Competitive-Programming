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
 
void solve() {
  int n; cin >> n; 
  vector<int> res(n, 0);
  for(int i = n - 1; i >= 0; i--) {
    int j = sqrt(i - 1) + 1;
    j = j * j;
    for(int k = j - i; k <= i; k++) {
      res[k] = j - k;   
    }
    i = j - i;
  }
  for(int i = 0; i < n; i++) {
    cout << res[i] << " \n"[i == n - 1];
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while(t--) solve(); 
  return 0;
}