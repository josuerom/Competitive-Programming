/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
   char word1[30], word2[30];
   cin.getline(word1, 30, '\n')
   cin.getline(word2, 30, '\n');
   strupr(word1); strupr(word2);
   if (strcmp(word1, word2)==0) cout << "Son iguales";
   else cout << "No son iguales";
   return 0;
}