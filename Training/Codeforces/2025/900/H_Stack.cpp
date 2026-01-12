/**
 *   author:  josuerom
 *   created: 09/10/23 23:39:37
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

const int N = 27;
char s[N];
int n;

void solve() {
   cin >> s;
   n = strlen(s);
   stack<long long> pl;
   for (int i = 0; i < n; i++) {
      long long a, b;
      if (s[i] == '*' && pl.size() > 1) {
            a = pl.top(); pl.pop();
            b = pl.top(); pl.pop();
            pl.push(a * b);
      } else if (s[i] == '+' && pl.size() > 1) {
            a = pl.top(); pl.pop();
            b = pl.top(); pl.pop();
            pl.push(a + b);
      } else {
         int m = s[i] - '0';
         pl.push(m);
      }
   }
   cout << pl.top() << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}