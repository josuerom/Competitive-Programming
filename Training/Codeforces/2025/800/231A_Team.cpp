/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main () {
   short n, petya, vasya, tonya, problemsresolved = 0;
   cin >> n;
   while (n--) {
   	cin >> petya >> vasya >> tonya;
   	problemsresolved += (petya+vasya+tonya) >= 2 ? 1 : 0;
   }
   cout << problemsresolved << "\n";
   return 0;
}