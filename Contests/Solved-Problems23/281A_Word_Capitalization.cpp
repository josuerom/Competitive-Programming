/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
   string word, f;
   cin >> word;
   f = word.substr(0, 1);
   if (f>="a" && f<="z") {
      f = toupper(f[0]);
      cout << f << word.substr(1, word.length()) << "\n";
   } else cout << word << "\n";
   return 0;
}