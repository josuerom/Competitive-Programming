/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string cadena; cin >> cadena;
   short n = cadena.length(), c=0;
   sort(cadena.begin(), cadena.end());
   for (short i = 0; i < n-1; i++) if (cadena[i] == cadena[i+1]) c++;
   cout << ((n-c)%2==0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
   return 0;
}