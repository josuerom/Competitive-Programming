/**
 *    author:  tourist
 *    created: 16.02.2023 19:05:48
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    vector<vector<int>> go(n);
    vector<int> deg(n);
    for (int i = 0; i < n; i++) {
      deg[i] = (int) g[i].size();
    }
    vector<bool> alive(n, true);
    vector<int> seq(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
      if (deg[i] == a[i]) {
        s.insert(i);
      }
    }
    for (int it = 0; it < n; it++) {
      int v = *s.begin();
      seq[it] = v;
      s.erase(v);
      alive[v] = false;
      for (int u : g[v]) {
        if (alive[u]) {
          go[v].push_back(u);
          deg[u] -= 1;
          if (deg[u] == a[u]) {
            s.insert(u);
          }
        }
      }
    }
    long long ans = (long long) n * (n + 1) / 2;
    for (int b = 0; b < n; b += 64) {
      vector<unsigned long long> mask(n);
      const unsigned long long one = 1;
      for (int i = b; i < b + 64 && i < n; i++) {
        mask[i] |= (one << (i - b));
      }
      for (int it = 0; it < n; it++) {
        int i = seq[it];
        for (int u : go[i]) {
          mask[u] |= mask[i];
        }
      }
      for (int i = 0; i < n; i++) {
        ans -= __builtin_popcountll(mask[i]);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}