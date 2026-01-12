/**
 *   author:  josuerom
 *   created: 09/09/23 17:05:06
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ull   unsigned long long int
#define ll    long long int
#define mp    make_pair
#define se    second
#define fi    first

clock_t startTime;
double getSolutionTime() {
   return (double) (clock() - startTime) / CLOCKS_PER_SEC;
}

const int N = 107;
int a[N];
int n, m, ans;

void solve() {
   cin >> n >> m;
   vector<int> b(n, 0);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= 0)
         b.push_back(abs(a[i]));
   }
   sort(b.rbegin(), b.rend());
   for (int i = m, j = 0; i > 0; i--, j++)  {
      if (b[j] != 0) ans += b[j];
      else break;
   }
   cout << ans << endl;
}

int main() {
   startTime = clock();
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "------ Case #" << nc << " ------\n";
      solve();
      cout << "time " << setprecision(5) << getSolutionTime() << " ms\n";
#else
      solve();
#endif
   }
   return 0;
}