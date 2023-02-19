/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   char str1[50], str2[50];
   cin.getline(str1, 50, '\n');
   strcpy(str2, str1);
   strrev(str2);
   cout << (strcmp(str1, str2)==0 ? "true" : "false") << endl;
   return 0;
}