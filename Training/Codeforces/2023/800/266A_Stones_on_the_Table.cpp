/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;

int main() {
   short n, c; cin >> n;
   string s; cin >> s;
   for (int i = 0; i < n-1; i++) if (s[i]==s[i+1]) c++;
   cout << c;
   return 0;
}