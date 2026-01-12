/**
 *   author:  josuerom
 *   created: 22/10/23 01:23:38
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

const int N = 1e3 + 10;
int n;
vector<int> np;

void preCalculate() {
   vector<bool> esPrimo(N, true);
   for (int i = 2; i < N; i++) {
      if (esPrimo[i]) {
         np.push_back(i);
         for (ll j = i * i; j <= N; j += i)
            esPrimo[j] = false;
      }
   }
}

void solve() {
   preCalculate();
   cin >> n;
   for (int i = 0; true; i++) {
      if (np[i] <= n) cout << " " << np[i];
      else break;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "Case #" << nc << ": ";
      solve();
#else
      solve();
#endif
   }
   return 0;
}