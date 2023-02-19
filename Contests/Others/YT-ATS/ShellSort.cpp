/******************************************
* @AUTHOR:            JOSUEROM            *
* @DATE:           08/11/22 19:47         *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

void ordenamientoShell(short a[], short tam) {
   short salto = tam/2, j, k, i;
   while (salto > 0) {
      for (i = salto; i < tam; i++) {
         j = i - salto;
         while (j >= 0) {
            k = j + salto;
            if (a[j] <= a[k]) j = -1;
            else {
               short temp = a[j];
               a[j] = a[k];
               a[k] = temp;
               j -= salto;
            }
         }
      }
      salto /= 2;
   }
}

int main() {
   short numeros[] = {10, 9, 1, 5, 2, 4, 6, 7, 8, 3};
   short tam = size(numeros);
   ordenamientoShell(numeros, tam);
   for (int e = 0; e < tam; e++) {
      if (e<tam-1) printf("%d ", numeros[e]);
      else printf("%d", numeros[e]);
   }
   return 0;
}