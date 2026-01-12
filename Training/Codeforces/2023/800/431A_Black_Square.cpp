/**
 *   author:  josuerom
 *   created: 08/06/23 22:56:21
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "debug.h"
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   vector<int> n;
   for (int i = 0; i < 4; i++) {
      int x; cin >> x;
      n.pb(x);
   }
   string s;
   cin >> s;
   sort(all(s));
   int a = count(all(s), '1');
   int b = count(all(s), '2');
   int c = count(all(s), '3');
   int d = count(all(s), '4');
   ull ans = (ull) (a*n[0] + b*n[1] + c*n[2] + d*n[3]);
   cout << ans << '\n';
   return 0;
}