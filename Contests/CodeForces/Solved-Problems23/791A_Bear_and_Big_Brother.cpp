/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   short a, b, c;
   cin >> a >> b;
   while (a <= b) {
      a *= 3; b *= 2;
      c++;
   }
   cout << c;
   return 0;
}