/**
 *  author:  josuerom
 *  created: 27/11/22 23:34:02
**/
#include <bits/stdc++.h>

#define VEREDICT(a) cout << (a ? "YES" : "NO") << endl
#define TESTCASE(tt) cin >> (tt); while ((tt)--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(a) (int) a.size()
#define ll long long
#define endl '\n'

using namespace std;
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define debug(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   ll n , mn = 1e9 , mx = -1e9 , mxi = 0 , mni = 0;
   cin >> n;
   ll a[n];
   for(auto &e : a) cin >> e;
   for(int i = 0; i < n; i++) {
      if(mn >= a[i]) {
         mn = a[i];
         mni = i;
      }
      if(mx < a[i]) {
         mx = a[i];
         mxi = i;
      }
   }
   if (mni < mxi) mxi --;
   cout << n - mni + mxi - 1 << endl;
   return 0;
}