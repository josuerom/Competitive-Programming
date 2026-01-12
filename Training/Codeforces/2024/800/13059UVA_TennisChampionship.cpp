/**
 * author:     josuerom
 * created:    03/03/23 17:19
 * complexity: O(p)
**/
#include <stdio.h>

int main() {
  unsigned long long int p;
  while (scanf("%llu", &p)==1) printf("%llu\n", (p-1));
  return 0;
}