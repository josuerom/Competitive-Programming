/**************************************************
 * @author:               josuerom                *
 * @created:           22/11/22 21:16             *
**************************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define end '\n'
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int n, t;
   cin >> n >> t;
   char s[n];
   for (int j = 0; j < n; j++) cin >> s[j];
   for (int i = 0; i < t; i++) {
      if (s[i]=='B' && s[i+1]=='G')
         swap(s[i+1], s[i]);
   }
   for (int k = 0; k < n; k++) {
      if (k<n-1) cout << s[k];
      else cout << s[k] << endl;
   }
   return 0;
}