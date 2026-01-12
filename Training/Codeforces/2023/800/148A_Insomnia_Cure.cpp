/**
 *  author:  josuerom
 *  created: 27/11/22 23:08:31
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
   ll n = 4, d, k = 0;
   ll a[n];
   for (auto &e : a) cin >> e;
   cin >> d;
   for(int j = 1; j <= d; j++){
      for(int i = 0; i < n; i++){
         if(j%a[i]==0) {
            k++; break;
         }
      }
   }
   cout << k;
   return 0;
}