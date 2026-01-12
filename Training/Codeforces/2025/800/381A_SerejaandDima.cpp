/**
 *  author:  josuerom
 *  created: 4/05/23 14:26:47
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   int c[n];
   for (int i = 0; i < n; i++) {
      cin >> c[i];
   }
   int l = 0, r = n-1, a = 0, b = 0;
   bool turn = 1;
   while (l <= r) {
      if (c[r] > c[l]) {
         if (turn) a += c[r];
         else b += c[r];
         r--;
      } else {
         if (turn) a += c[l];
         else b += c[l];
         l++;
      }
      turn = !turn;
   }
   cout << a <<" "<< b << '\n';
   return 0;
}