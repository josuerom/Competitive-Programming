/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;
#define ui unsigned int

int main() {
   ui n, k;
   scanf("%d %d", &n, &k);
   for (ui i = 1, j = 1; i <= k; i++) {
      if (n%10==0) n /= 10;
      else n -= 1;
   }
   cout << n;
   return 0;
}