/**
 *   author:  josuerom
 *   created: 21/06/23 13:56:43
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int)(x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

void solve(vector<int> &a) {
   int goods = 0, bads = 0;
   int even = 0, odd = 0;
   int n = len(a);
   for (int i = 0; i < n; i++) {
      if (i%2 == 0 && a[i]%2 == 0) goods++;
      else if (i%2 != 0 && a[i]%2 != 0) goods++;
      else bads++;
      if (a[i]%2 == 0) even++;
      else odd++;
   }
   if (!goods && n == 1) cout << "-1\n";
   else if (n%2 == 0 && even != odd) cout << "-1\n";
   else if (n%2 != 0 && (even-1) != odd) cout << "-1\n";
   else if (goods == n) cout << "0\n";
   else if (!goods) cout << (n/2) << '\n';
   else cout << (bads/2) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      vector<int> a(n);
      for (auto &e : a) cin >> e;
      solve(a);
   }
   return 0;
}