/**
 *   author:  josuerom
 *   created: 05/10/23 18:57:59
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

const ll N = 2e9 + 1;
// vector<pair<ll, ll>> dp(N, mp(0, 0));

void preCalculate(vector<int> &cf, vector<int> &dg, vector<int> &rf) {
   cf.pb(1); dg.pb(1); rf.pb(1);
   for (ll i = 2; cf.back() <= N; i++) {
      if (i % 2 == 0) {
         cf.pb(cf[i - 1] + 1);
         rf.pb((i * i));
      } else {
         cf.pb(i * i);
         rf.pb(rf[i - 1] + 1);
      }
      dg.pb((i * i) - (i - 1));
   }
}

void solve(int n, vector<int> &cf, vector<int> &dg, vector<int> &rf) {
   if (n == 1) {
      cout << "1 1" << endl;
      return;
   }
   /* if (dp[n].fi != 0) {
      cout << dp[n].fi <<" "<< dp[n].se << endl;
      return;
   } */
   auto it1 = lower_bound(cf.begin(), cf.end(), n);
   auto it2 = find(dg.begin(), dg.end(), n);
   auto it3 = find(rf.begin(), rf.end(), n);
   int in = distance(cf.begin(), it1);
   // cout << "in: " << in << " dg[in] = " << dg[in] << endl;
   if (n == cf[in]) {
      cout << "1 " << in << endl;
      // dp[n] = mp(1, in);
      return;
   } else if (it2 != dg.end()) {
      int in2 = distance(dg.begin(), it2);
      cout << in2 << " " << in2 << endl;
      // dp[n] = mp(in2, in2);
      return;
   } else if (it3 != rf.end()) {
      int in3 = distance(rf.begin(), it3);
      cout << in3 << " 1" << endl;
      // dp[n] = mp(in3, 1);
      return;
   }
   for (int i = 2; i < (int) cf.size(); i++) {
      if (n > min(cf[i], rf[i]) && n < max(cf[i], rf[i])) {
         in = i;
         break;
      }
   }
   int ans1 = 0, ans2 = 0;
   if (in % 2 == 0) {
      if (n < dg[in]){
         ans1 = in;
         ans2 = n - cf[in] + 1;
      } else {
         ans1 = in - (n - dg[in]);
         ans2 = in;
      }
   } else {
      if (n > dg[in]) {
         ans1 = in;
         ans2 = cf[in] - n + 1;
      } else {
         ans1 = in - (dg[in] - n);
         ans2 = in;
      }
   }
   // dp[n] = mp(ans2, ans1);
   cout << ans2 << " " << ans1 << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   vector<int> cf, dg, rf;
   cf.pb(0); dg.pb(0); rf.pb(0);
   preCalculate(cf, dg, rf);
   // cout << "\ncf.size(): " << cf.size() << endl;
   int x = 0;
   while (cin >> x) {
      solve(x, cf, dg, rf);
   }
   return 0;
}