/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;

int main() {
   string s; cin >> s;
   short ans=0;
   for (int i = 0; i < s.length(); i++) if (s[i]=='4' || s[i]=='7') ans++;
   cout << (ans==4||ans==7 ? "YES\n" : "NO\n");
   return 0;
}
