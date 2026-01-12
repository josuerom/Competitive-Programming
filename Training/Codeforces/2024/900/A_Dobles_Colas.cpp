/**
 *   author:  josuerom
 *   created: 09/10/23 18:40:29
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

int tt, n, a;

void solve() {
   deque<int> dq;
   cin >> tt;
   while (tt--) {
      string s; cin >> s;
      if (s == "AGREGA_IZQ") {
         cin >> n;
         dq.push_front(n);
      } else if (s == "AGREGA_DER") {
         cin >> n;
         dq.push_back(n);
      } else if (s == "QUITA_IZQ") {
         if (!dq.empty()) dq.pop_front();
      } else if (s == "QUITA_DER") {
         if (!dq.empty()) dq.pop_back();
      } else if (s == "ROTA_IZQ") {
         if (!dq.empty()) {
            a = dq.front();
            dq.pop_front();
            dq.push_back(a);
         }
      } else if (s == "ROTA_DER") {
         if (!dq.empty()) {
            a = dq.back();
            dq.pop_back();
            dq.push_front(a);
         }
      }
   }
   for (auto &e: dq)
      cout << e << " ";
   cout << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   for (int nc = 1; nc <= 1; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}