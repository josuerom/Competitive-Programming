/**
 *   author:  josuerom
 *   created: 27/11/2022 17:49:19
 **/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   ll n; cin >> n;
   cout << (n%2==0 ? (n+1)/2 : (-1*(n+1)) /2) << endl;
   return 0;
}