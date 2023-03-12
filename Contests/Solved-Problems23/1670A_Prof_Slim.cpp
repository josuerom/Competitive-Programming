/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve() {
   ll n; cin >> n;
   vector<ll> arr(n);
   ll neg = 0;
   for(ll i = 0; i<n; i++) {
      cin >> arr[i];
      if(arr[i] < 0) neg++;
   }
   bool fn = true;
   for(ll i = 0; i < neg-1; i++) {
      if(abs(arr[i]) < abs(arr[i+1])) fn = false;
   }
   for(ll i = neg; i < n-1; i++) {
      if(abs(arr[i]) > abs(arr[i+1])) fn = false;
   }
   cout << (fn==true ? "YES\n" : "NO\n");
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   ll tc; cin >> tc;
   while (tc--) solve();
   return 0;
}