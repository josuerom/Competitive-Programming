/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   short matrix[5][5], a,b, iter;
   for (short i = 0; i < 5; i++) {
      for (short j = 0; j < 5; j++) {
          cin >> matrix[i][j];
          if (matrix[i][j] == 1) {
             a = i; b = j;
          }
      }
   }
   if (a==2 && b==2)
      cout << "0\n";
   else if (a==0&&b==0 || a==0&&b==4 || a==4&&b==0 || a==4&&b==4)
      cout << "4\n";
   else if (a==1&&b==2 || a==2&&b==1 || a==3&&b==2 || a==2&&b==3)
      cout << "1\n";
   else if (a==0&&b==1 || a==0&&b==3 || a==1&&b==0 || a==1&&b==4 || a==3&&b==0 || a==3&&b==4 || a==4&&b==1 || a==4&&b==3)
      cout << "3\n";
   else if (a==0&&b==2 || a==1&&b==1 || a==1&&b==3 || a==2&&b==0 || a==2&&b==4 || a==3&&b==1 || a==3&&b==3 || a==4&&b==2)
      cout << "2\n";
   return 0;
}