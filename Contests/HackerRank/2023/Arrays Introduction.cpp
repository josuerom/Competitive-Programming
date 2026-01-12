#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (auto &e : arr) cin >> e;
    for (int i=N-1; i >= 0; i--) {
        if (i != 0) cout << arr[i] << " ";
        else cout << arr[i];
    }
    return 0;
}
