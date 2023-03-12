/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
   char s[10000], clone[10000], c[1];
   string str, aux;
   cin.getline(s, 10000, '\n');
   int n = strlen(s);
   int symbols = (n-1);
   for (int h = 0; h < n; h++) {
      if (s[h]!='+') str += s[h];
   }
   for (int i = 0, j = 0; i < n; i++) {
      if (s[i] == '+') clone[j++] = s[i];
   }
   sort(str.begin(), str.end());
   for (int f = 1, i = 0, j = 0; f <= n; f++) {
      if (f%2!=0) aux += str[i++];
      else aux += clone[j++];
   }
   cout << aux << endl;
   return 0;
}