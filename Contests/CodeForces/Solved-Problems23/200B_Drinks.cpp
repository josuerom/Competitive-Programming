/**
 *   author:  josuerom
 *   created: 27/11/2022 17:49:19
 **/
#include <bits/stdc++.h>
using namespace std;

int n, x;
double ans = 0;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   cin >> n;
   for (int i = 0; i < n; i++) { cin >> x; ans += x; }
   cout.setf(ios::fixed, ios::floatfield);
   cout.precision(12);
   cout << ans/n << endl;
   return 0;
}