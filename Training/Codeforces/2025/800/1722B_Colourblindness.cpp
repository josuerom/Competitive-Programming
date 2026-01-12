/**
 *   author:  josuerom
 *   created: 25/07/23 21:51:06
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

const int N = 107;
char s1[N];
char s;
int n;

void solve() {
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> s1[i];
   bool ans = 1;
   for (int i = 0; i < n; i++) {
      cin >> s;
      if ((s1[i] == 'R' && (s == 'G' || s == 'B')) || (s == 'R' && (s1[i] == 'G' || s1[i] == 'B'))) {
         ans = 0;
      }
   }
   cout << (ans ? "YES" : "NO") << '\n';
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
   while (tt--)
      solve();
#endif
   return 0;
}