/**
 *   author:  josuerom
 *   created: 25/07/23 21:16:36
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

const int N = 57;
char s[N];
int n;

void solve() {
   scanf("%d\n%s", &n, s);
   sort(s, s + n);
   int ans = 2;
   for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i + 1])
         ans += 1;
      else
         ans += 2;
   }
   printf("%d\n", ans);
}

int main() {
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