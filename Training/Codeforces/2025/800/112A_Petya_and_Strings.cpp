/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   const int MAX = 1e2+3;
   char A[MAX], B[MAX];
   cin.getline(A, MAX, '\n');
   cin.getline(B, MAX, '\n');
   strlwr(A); strlwr(B);
   if (strcmp(A, B)==0) cout << "0";
   else if (strcmp(B, A)>0) cout << "-1";
   else if (strcmp(A, B)>0) cout << "1";
   return 0;
}