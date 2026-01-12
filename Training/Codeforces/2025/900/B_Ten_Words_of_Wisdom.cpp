/**
 *   author:  josuerom
 *   created: 20/02/24 20:33:14
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define br  '\n'

// aprendiendo a manejar <tuplasZ (de 3 en 3)
bool comp(const tuple<int, int, int> &a,  
          const tuple<int, int, int> &b) { 
   return get<2>(a) > get<2>(b); 
}

int n, a, b;
vector<tuple<int, int, int>> vt;

void solve() {
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> a >> b;
      if (a <= 10) vt.push_back({i, a, b});
   }
   sort(vt.begin(), vt.end(), comp);
   cout << get<0>(vt.front()) << br;
   vt.clear();
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1, nc = 0;
   cin >> tt;
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