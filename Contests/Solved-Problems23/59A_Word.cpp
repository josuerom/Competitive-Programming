/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
   const int MAX = 1e2+3;
   char s[MAX];
   short may=0, min=0;
   cin.getline(s, MAX, '\n');
   for (int i = 0; i < strlen(s); i++) {
      if (s[i]>='A' && s[i]<='Z') may++;
      else min++;
   }
   if (may>min) cout << strupr(s);
   else if (may==min) cout << strlwr(s);
   else cout << strlwr(s);
   return 0;
}