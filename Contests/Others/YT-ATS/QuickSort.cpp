/******************************************
* @AUTHOR:            JOSUEROM            *
* @DATE:           08/11/22 19:54         *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

void ordenamientoQuick (int a[], int primero, int ultimo) {
   int i, j, central, pivote;
   i = primero;
   j = ultimo;
   central = (primero+ultimo)/2;
   pivote = a[central];
   do {
      while (a[i] < pivote) i++;
      while (a[j] > pivote) j--;
      if (i <= j) {
         swap(a[i], a[j]);
         i++; j--;
      }
   } while (i <= j);
   if (primero < j) ordenamientoQuick(a, primero, j);
   if (i < ultimo) ordenamientoQuick(a, i, ultimo);
}

int main() {
   int numeros[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   ordenamientoQuick(numeros, 0, 9);
   for (int i = 0; i < 10; i++) {
      if (i<9) printf("%d ", numeros[i]);
      else printf("%d", numeros[i]);
   }
   return 0;
}