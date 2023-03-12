/****************************************************
* @Author:                josuerom                  *
* @Date:               18/11/22 17:59               *
* @Institute: Minute Of God University Of Colombia  *
****************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, ans = 0; cin >> n;
   string s; cin >> s;
   for (int i = 0; i < n; i++) {
      if (s[i]=='A') ans++;
      else ans--;
   }
   if (ans==0) cout << "Friendship\n";
   else if (ans>0) cout << "Anton\n";
   else cout << "Danik\n";
   return 0;
}