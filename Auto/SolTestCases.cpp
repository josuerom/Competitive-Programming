/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
**/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>
using namespace std;

int main() {
    // INICIO DEL CRONÓMETRO
    auto start = chrono::high_resolution_clock::now();

    freopen("/Users/josuerom/Workspace/Competitive-Programming/Auto/Extensive-test-cases.txt", "r", stdin);
    freopen("/Users/josuerom/Workspace/Competitive-Programming/Auto/Test-case-results.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    /* --------------------------------- */
    // Pegue aquí la solución y acomodela!
    /* --------------------------------- */

    // FIN DEL CRONÓMETRO
    auto end = chrono::high_resolution_clock::now();
    auto time = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    time = min(time, 9999LL);
    cerr << "\nTiempo: " << time << " ms\n";
}