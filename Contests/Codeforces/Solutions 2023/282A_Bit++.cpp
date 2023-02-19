/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   short n, x=0;
   string sen;
   cin >> n;
   while (n--) {
      cin >> sen;
      if (sen.substr(0,1) == "X" && sen.substr(2,2) == "+") x++;
      else if (sen.substr(0,1) == "+") ++x;
      else if (sen.substr(0,1) == "-") --x;
      else x--;
   }
   cout << x << endl;
   return 0;
}