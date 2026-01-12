#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int &a, int &b, int &c, int &d) {
    int n[4];
    n[0] = a; n[1] = b; n[2] = c; n[3] = d;
    int max=n[0];
    for (int i = 1; i < 4; i++) {
        if (n[i] > max) max = n[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
