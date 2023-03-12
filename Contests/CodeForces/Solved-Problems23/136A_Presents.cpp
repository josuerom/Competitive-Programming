/**
 *  author:  josuerom
 *  created: 27/11/22 23:40:46
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
   int n, p = 1;
   cin >> n;
   int a[n];
   for (auto &e : a) cin >> e;
   int b[n];
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (a[j] == p) {
            b[p-1] = j+1; p++;
         }
      }
   }
   for (int i = 0; i < n; i++) cout << b[i] << ' ';
   return 0;
}