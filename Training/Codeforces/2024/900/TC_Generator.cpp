#include <stdio.h>
using namespace std;

const long long N = 1e12;
const long long M = N - 125;

int main() {
   freopen("samples/gen", "w", stdout);
   printf("%lld\n", 125LL);
   for (long long i = N; i >= M; i--) {
      printf("%lld ", i);
   }
   printf("\n");
   return 0;
}