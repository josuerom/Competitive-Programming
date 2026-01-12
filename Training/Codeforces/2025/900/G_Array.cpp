/**
 *   author:  josuerom
 *   created: 24/10/23 14:35:31
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

int n, x;
vector<int> pos, neg;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> x;
      if (x > 0) pos.push_back(x);
      else if (x < 0) neg.push_back(x);
   }
   int pron = 0, prop = 0;
   while ((pron < 0 && prop > 0) || (pron > 0 && prop < 0)) {
      pron = neg.empty() ? 0 : 1, prop = pos.empty() ? 0 : 1;
      if (!neg.empty()) {
         for (auto &e : neg)
            pron *= e;
      }
      if (!pos.empty()) {
         for (auto &e : pos)
            prop *= e;
      }
      debug(pron, prop);
      if (pron > 0 || prop == 0) {
         pos.push_back(neg.back());
         neg.pop_back();
      }
      if (prop < 0 || pron == 0) {
         neg.push_back(pos.back());
         pos.pop_back();
      }
   }
   int a = 1, b = 1;
   for (auto &e : neg) a *= e;
   for (auto &e : pos) b *= e;
   if (a < 0 && b > 0) {
      cout << neg.size();
      for (auto &e : neg) cout <<" "<< e;
      cout << br;
      cout << pos.size();
      for (auto &e : pos) cout <<" "<< e;
   } else {
      cout << pos.size();
      for (auto &e : pos) cout <<" "<< e;
      cout << br;
      cout << neg.size();
      for (auto &e : neg) cout <<" "<< e;
   }
   cout << "\n1 0\n";
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