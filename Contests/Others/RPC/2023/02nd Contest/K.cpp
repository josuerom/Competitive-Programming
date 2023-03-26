/**
 *  author:  josuerom
 *  created: 24/03/23 03:14:22
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
   int tt;
   cin >> tt;
   while (tt-- > 0) {
      string i, j;
      int k;
      cin >> i >> j >> k;
      int socks, ans = 0;
      if (j=="any") socks = k;
      else if (j=="left") socks -= k;
      else if (j=="right") socks -= k;
      cout << (socks>0 ? ans : ans) << '\n';
   }
   return 0;
}