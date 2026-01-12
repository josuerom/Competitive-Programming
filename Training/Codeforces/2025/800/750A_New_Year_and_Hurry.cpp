/**
 *  author:  josuerom
 *  created: 19/03/23 23:50:45
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(vec) (int) vec.size()
#define ll long long
#define endl '\n'

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   short n, k;
   cin >> n >> k;
   k = 240 - k;
   short add = 0, ans = 0;
   for (int i = 1; i <= n; i++) {
      add += 5*i;
      if (add <= k) ans++;
      else break;
   }
   cout << ans << '\n';
   return 0;
}