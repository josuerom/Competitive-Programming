/**
 *  author:  josuerom
 *  created: 19/03/23 23:31:50
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
   int n;
   cin >> n;
   vector<int> crimes(n);
   for (auto &e : crimes) cin >> e;
   int add = 0, ans = 0;
   for (int i = 0; i < n; i++) {
      if (crimes[i]>=1) add += crimes[i];
      else if (crimes[i]==-1 && add>0) add--;
      else ans++;
   }
   //dbg(add, ans);
   cout << ans << '\n';
   return 0;
}