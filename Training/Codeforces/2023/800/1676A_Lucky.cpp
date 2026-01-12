/**
 *   author:  josuerom
 *   created: 08/06/23 22:10:35
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
      string s;
      cin >> s;
      int a = 0, b = 0;
      for (int i = 0; i < 6; i++) {
         string x(1, s[i]);
         if (i < 3) a += stoi(x);
         else b += stoi(x);
      }
      cout << (a==b ? "YES" : "NO") << '\n';
   }
   return 0;
}