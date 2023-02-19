/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
   char str[100];
   cin.getline(str, 100, '\n');
   int a=0,e=0,i=0,o=0,u=0, n = strlen(str);
   strlwr(str);
   for (int i = 0; i < n; i++) {
      if (str[i]=='a') a++;
      else if (str[i]=='e') e++;
      else if (str[i]=='i') i++;
      else if (str[i]=='o') o++;
      else if (str[i]=='u') u++;
   }
   printf("%d %d %d %d %d", a,e,i,o,u);
   return 0;
}