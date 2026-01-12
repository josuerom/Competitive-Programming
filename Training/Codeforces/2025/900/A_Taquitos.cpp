/**
 *   author:  josuerom
 *   created: 23/09/23 18:53:21
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

ll t, ans;

void solve(queue<ll> &c, ll n) {
   if (n == 1) {
      cin >> t;
      c.push(t);
   } else if (n == 2) {
      if (!c.empty()) {
         ans += c.front();
         c.pop();
      }
   } else if (n == 3)
      cout << (ll) c.size() << endl;
   else
      cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   queue<ll> cola;
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
      ll n; cin >> n;
      solve(cola, n);
   }
   return 0;
}