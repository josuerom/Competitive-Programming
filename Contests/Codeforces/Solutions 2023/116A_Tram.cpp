/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
using namespace std;
#define ui unsigned int

int main() {
   ui n, l = 0, capacity = 0, max = 0;
   cin >> n;
   ui mt[n][2];
   for (ui i = 0; i < n; i++) {
      ui j=0;
      cin >> mt[i][j] >> mt[i][++j];
   }
   for (ui j = 0; j < n-1; j++) {
      capacity -= mt[j][0];
      capacity += mt[j][1];
      if (capacity > max) max = capacity;
   }
   cout << max << "\n";
   return 0;
}