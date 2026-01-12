#include <stdio.h>

void update(int *a,int *b) {
    int x = *a, y = *b;
    printf("%d\n", (x+y));
    if (x>y) printf("%d\n", (x-y));
    else printf("%d\n", (y-x));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
