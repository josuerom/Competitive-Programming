/**
 * @solution problem: H. How Many Unicycles in a Broken Wheel
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef unsigned int UMD;
//#define AFICIONADOS

#ifdef WIN32
   typedef unsigned __int64 LLONG;
#else
   typedef unsigned long long LLONG;
#endif

#define MODULUS 100007
#define MAX_N 4000

LLONG fibs[2*MAX_N];
int lastFib;

/*
si no usamos el borde de v(n) a v(1) el ciclo en el monociclo tiene la forma
v[0]->v[i]]->...->v[j]->v[0] para j > i donde ... indica los vértices en el borde de i a j
llamar al ciclo i,j
j puede correr de 2 a n y para un j dado, puedo correr de 1 a j-1
entonces el total de monociclos es SUM(j-2,n)[SUM(i = 1, j-1)[monociclo con ciclo el ciclo i,j]
monociclo con ciclo el i,j ciclo =
número de fue para conectar vértices antes de i al ciclo * número de formas de conectar vértices después de j
por simetría, el número de vías para conectar k vértices antes de i es el mismo que el número
de manera de conectar k vértices después de j Llame al número F(k)
entonces el total de monociclos es SUM(j-2,n)[SUM(i = 1, j-1)[F(i-1)*F(n-j)]
qué es F(k): (considere los vértices antes de i)
F(0) = 1
F(1) = 2 v[1] se conecta a v[0] o v[2]
f(2) = 5: v[1] se conecta a v[0] y v[2] se conecta a v[0], v[1] o v[3]
O v[1] se conecta a v[2] y v[2] se conecta a v[0] o v[3] (v[1] no funciona)
SWAG F[k] = Fib[2*k+1] (cuando Fib[1] = Fib[2] = 1)
entonces el total de monociclos es SUM(j=2,n)[Fib(2*(n-j) + 1)* SUM(i = 1, j-1)[Fib(2*i-1)]
= SUMA(j-2,n)[Fib(2*(n-j) + 1)* Fib(2*j-2)]
ya que suma i = 1 a n Fib(2*i-1) = Fib(2*n)
*/

/*
¿Por qué obtenemos Fibonacci? de nuevo sea F(k) = número de formas de conectar k vértices V[1] a v[k]a un ciclo que incluye v[0]->v[k+1]
ahora supongamos que consideramos los vértices v[1] .. v[k+1] adjuntos a un ciclo que incluye v[0]->v[k+2]
v[k+1] puede conectarse a v[k+2] y luego hay F(k) formas de conectar v[1] ... v[k]
v[k+1] puede conectarse a v[0] y luego hay F(k) formas de conectar v[1] ... v[k]
v[k+1] puede conectarse a v[k] pero no podemos contar ninguna de las formas F(k) de conectar v[1 ... v[k]
al ciclo que se conecta a través del borde v[k]->v[k+1] (F9k-1) de ellos
entonces F(k+1) = 3*f(k) - F(k-1) (Fib(k+2) = 3*Fib(k) - Fib(k-2))
*/
int hacerFibonaccis(int n) {
	int j;
	fibs[1] = fibs[2] = 1;
	for(j = 3; j < 2*n ; j++) {
		fibs[j] = (fibs[j-1] + fibs[j-2]) % MODULUS;
	}
	return 0;
}

UMD brokerim(int n) {
	LLONG res;
	int j;
	for(j = 2, res = 0 ; j <= n ; j++) {
		res = (res + fibs[2*(n-j) - 1] * fibs[2*j-2]) % MODULUS;
	}
	return (UMD)res;
}

char inbuf[256];

int main() {
	UMD n, cnt;
   #ifdef AFICIONADOS
      while(1) {
   #endif
      if(fgets(&(inbuf[0]), 255, stdin) == NULL) {
         fprintf(stderr, "error de lectura en los datos de entrada\n");
         return -3;
      }
      if(sscanf(&(inbuf[0]), "%u", &n) != 1){
         fprintf(stderr, "scan failed on problem data\n");
         return -3;
      }
      if((n < 3) || (n > MAX_N)) {
         fprintf(stderr, "el tamaño de la rueda %d no está en el rango 1... %d\n", n, MAX_N);
         return -5;
      }
      hacerFibonaccis(n);
      cnt = brokerim(n);
   #ifdef TEST
      printf("%u\n", cnt);
      }
   #else
      printf("%u\n", cnt);
   #endif
	return 0;
}