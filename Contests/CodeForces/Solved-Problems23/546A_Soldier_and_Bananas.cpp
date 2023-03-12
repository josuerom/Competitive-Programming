/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;
#define ll unsigned long long

int main() {
   ll k, n, w, ans=0;
   scanf("%lld %lld %lld", &k, &n, &w);
   for (ll i = 1; i <= w; i++) ans += i*k;
   cout << (n>ans ? 0 : ans-n);
   return 0;
}