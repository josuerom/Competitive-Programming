/// author: josuerom
#include <stdio.h>

using namespace std;

const int N = 1e9;
const int H = 1e9 - 1e3;

int main() {
   freopen("./samples/gen", "w", stdout);
   printf("%d\n", N - H);
   for (int i = N; i >= H; i--) {
      printf("%d\n", i);
   }
   return 0;
}