/**
 *  author:  josuerom
 *  created: 18/04/23 00:35:13
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   int x = 8;
   int y = (n-8);
   bool prime = true;
   for (int i = 2; i < y; i++) {
      if (y%i==0) {
         prime = false;
         break;
      }
   }
   if (prime) { x += 1; y -= 1; }
   cout << x <<" "<< y << '\n';
   return 0;
}