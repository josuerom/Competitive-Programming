/**
 *   author:  josuerom
 *   created: 27/11/2022 18:54:21
**/
#include <bits/stdc++.h>

#define sz(a) (int) a.size()
#define endl '\n'
using namespace std;

string ch1, ch2, ans;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   cin >> ch1 >> ch2;
   for (int i = 0; i < sz(ch1); i++) {
      if (ch1[i]=='1'&&ch2[i]=='1' || ch1[i]=='0'&&ch2[i]=='0') ans += '0';
      else ans += '1';
   }
   cout << ans << endl;
   return 0;
}