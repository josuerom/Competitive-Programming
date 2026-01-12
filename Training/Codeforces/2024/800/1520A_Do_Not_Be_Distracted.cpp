/**
 *   author:  josuerom
 *   created: 08/06/23 21:32:33
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
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      string s;
      cin >> n >> s;
      if (n > 2) {
         bool ans = 1;
         for (int i = 0; i < n-1; i++) {
            if (s[i] != s[i+1]) {
               auto it = find(s.begin()+(i+1), s.end(), s[i]);
               if (it != s.end()) {
                  ans = 0; break;
               }
            }
         }
         cout << (ans ? "YES" : "NO") << '\n';
      } else cout << "YES\n";
   }
   return 0;
}