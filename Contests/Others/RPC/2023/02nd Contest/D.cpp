/**
 *  author:  josuerom
 *  created: 23/03/23 01:20:39
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
   int n;
   cin >> n;
   int suns[n][2];
   for (int i = 0; i < n; i++) {
      cin >> suns[i][0] >> suns[i][1];
   }
   bool diagonal = true;
   int rst = abs(suns[0][0] - suns[0][1]);
   int ans = 0;
   for (int i = 0; i < n; i++) {
      int x = suns[i][0], y = suns[i][1];
      ans += n + (x+y) + (x-y) + (-x+y) + (-x-y);
      //dbg(ans);
      if (rst != abs(x-y)) {
         diagonal = false;
      }
   }
   ans *= 2;
   if (n==1) cout << 4 << '\n';
   else cout << (diagonal ? ans+1 : ans) << '\n';
   return 0;
}
/** El error está en la línea 33.
Input:
3
2 3
4 5
6 7

Output: 13
**/