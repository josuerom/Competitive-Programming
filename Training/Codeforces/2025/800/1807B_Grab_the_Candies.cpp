/**
 *  author:  josuerom
 *  created: 20/03/23 16:59:42
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cout << '\n'; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(vec) (int) (vec).size()
#define ull unsigned long long
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   short tt;
   cin >> tt;
   while (tt-- > 0) {
      short n;
      cin >> n;
      int a[n];
      int mahai = 0, blanca = 0;
      for (int i = 0; i < n; i++) {
         cin >> a[i];
         if (a[i]%2==0) mahai += a[i];
         else blanca += a[i];
      }
      cout << (mahai>blanca ? "YES" : "NO") << '\n';
   }
   return 0;
}