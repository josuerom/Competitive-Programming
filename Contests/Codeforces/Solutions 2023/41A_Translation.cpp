/**************************************************
 * @author:               josuerom                *
 * @created:         24/11/22 21:47:50            *
**************************************************/
//#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;
#define VEREDICT(a) cout << ((a) ? "YES" : "NO") << endl
#define TESTCASE(tt) cin >> (tt); while ((tt)--)
#define ll long long
#define endl '\n'
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

string s, is;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   cin >> s >> is;
   reverse(is.begin(), is.end());
   VEREDICT(is==s);
   return 0;
}