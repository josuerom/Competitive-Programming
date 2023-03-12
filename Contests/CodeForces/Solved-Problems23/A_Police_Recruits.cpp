/**
 *  author:  josuerom
 *  created: 11/03/23 22:30:27
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
   ios::sync_with_stdio(false); cin.tie(0);
   int n;
   cin >> n;
   vector<int> crimes(n);
   for (auto &e : crimes) cin >> e;
   int ans = 0, aux;
   for (int i = 0; i < n; i++) {
      if(crimes[i] == -1) ans++;
      else {
         aux = crimes[i];
         if (aux==1) i += 1;
         else {
            for (int j = i+1; j < n; j++) {
               if (aux-- == 0) {
                  i = j+1; break;
               }
            }
         }
      }
   }
   cout << ans << '\n';
   return 0;
}