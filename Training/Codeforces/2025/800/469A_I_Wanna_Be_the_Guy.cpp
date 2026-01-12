/**
 *   author:  josuerom
 *   created: 27/11/2022 21:51:03
**/
#include <bits/stdc++.h>

#define all(a) a.begin(), a.end()
#define sz(a) (int) a.size()
#define endl '\n'
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
   #endif
   int level, p, q;
   cin >> level >> p;
   vector<int> X(p);
   for (auto &e: X) cin >> e;
   cin >> q;
   vector<int> Y(q);
   for (auto &r: Y) cin >> r;
   sort(all(X)); sort(all(Y));
   bool not_found = false;
   for (int i = 1; i <= level; i++) {
      if (binary_search(all(X), i) || binary_search(all(Y), i)) continue;
      else { not_found = true; break; }
   }
   cout << (not_found ? "Oh, my keyboard!" : "I become the guy.") << endl;
   return 0;
}