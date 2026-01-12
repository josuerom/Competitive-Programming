/**
 *   author:  josuerom
 *   created: 10/07/23 17:21:03
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first

stack<int> pila;

void solve() {
   int n;
   cin >> n;
   if (n == 1) {
      int x;
      cin >> x;
      pila.push(x);
   }
   if (n == 2 && !pila.empty()) pila.pop();
   if (n == 3) {
      if (pila.empty()) cout << "Empty!\n";
      else cout << pila.top() << '\n';
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
#ifdef josuerom
   for (int nc = 1; nc <= tt; nc++) {
      cout << "----- Case #" << nc << " -----\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
   return 0;
}