/**
 *  author:  josuerom
 *  created: 20/03/23 17:15:34
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
   while (tt--) {
      int n;
      cin >> n;
      char s[n+3];
      cin.getline(s, n+3, '\n');
      string ans;
      for (int i = 0; i < n; i++) {
         if (s[i]=='a') ans += "0";
         else if (s[i]=='b' || s[i]=='c') ans += "1";
         else ans.push_back(s[i]);
      }
      cout << ans << '\n';
      bool flag = true;
      for (int i = 0; i < n-1; i++) {
         if (ans[i]==ans[i+1]) {
            flag = false;
            break;
         }
      }
      cout << (flag&&n!=1 ? "YES" : "NO") << '\n';
   }
   return 0;
}