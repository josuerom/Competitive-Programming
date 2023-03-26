/**
 * @solution problem: I. Pooling PCR Tests
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
//#define UMD

int solve(double prob) {
	double best, probnot, dn, cur;
	int bestind, i;
	probnot = (1.0 - prob)*(1.0 - prob);
	bestind = 1;
	best = 1.0;
	for(i = 2; i <= 16; i++) {
		dn = i;
		cur = probnot/dn + 1.0 - probnot;
      //printf("%lf\n", cur);
		if(cur < best) {
			bestind = i;
			best = cur;
		}
		probnot *= (1.0 - prob);
	}
	return bestind;
}

char inbuf[256];
int main() {
	double prob;
	int ret;
   #ifdef UMD
      while(1) {
   #endif
      if(fgets(&(inbuf[0]), 255, stdin) == NULL) {
         fprintf(stderr, "lectura fallida en dimensiones\n");
         return -2;
      }
      if(sscanf(&(inbuf[0]), "%lf", &prob) != 1) {
         fprintf(stderr, "el escaneo falló en la probabilidad de entrada\n");
         return -3;
      }
      if((prob <= 0.0) || (prob >= 1.0)) {
         fprintf(stderr, "probabilidad no en el rango 0.0 -> 1.0\n");
         return -4;
      }
      if((ret = solve(prob)) < 0) {
         fprintf(stderr, "obtener error %d\n", ret);
         return ret;
      }
      printf("%d\n", ret);
   #ifdef TEST
      }
   #endif
	return 0;
}