/**
 *   author:  josuerom
 *   created: 21/06/23 18:27:49
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

bool esPrimo(ll x) {
   for (ll divisor = 2; divisor <= sqrt(x); divisor++) {
      if (x % divisor == 0) return false;
   }
   return true;
}

bool solve(ll t) {
   ll raiz = (ll) sqrt(t);
   if (raiz * raiz != t) return false;
   if (esPrimo(raiz)) return true;
   else return false;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int n;
   cin >> n;
   while (n--) {
      ll x; cin >> x;
      if (x == 4) cout << "YES\n";
      else if (x < 9 || x%2 == 0) cout << "NO\n";
      else if (solve(x)) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}