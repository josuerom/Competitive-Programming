/**
 *  author:  josuerom
 *  created: 20/03/23 00:10:33
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
   short a, b;
   cin >> a >> b;
   short ans1 = min(a,b), ans2 = abs(a-b)/2;
   cout << ans1 <<" "<< ans2 << '\n';
   return 0;
}