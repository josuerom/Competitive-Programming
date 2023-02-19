/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   int n; cin >> n;
   string word;
   while (n--) {
      cin >> word;
      if (word.length() > 10) {
         string i = word.substr(0, 1);
         string f = word.substr(word.length()-1);
         cout << i << word.length()-2 << f << endl;
      } else cout << word << endl;
   }
  return 0;
}