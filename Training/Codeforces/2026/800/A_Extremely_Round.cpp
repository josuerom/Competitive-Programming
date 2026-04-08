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
#define endl '\n'
using namespace std;

const int N = (1e6) + 2;
int a[N], n;

void solve() {
   cin >> n;
   cout << a[n] << endl;
}

void preCalculate() {
   for (int i = 1; i < N; i++) {
      if (i <= 9) a[i] = i;
      else if (i < 100) a[i] = i / 10 + a[9];
      else if (i < 1000) a[i] = i / 100 + a[99];
      else if (i < 10000) a[i] = i / 1000 + a[999];
      else if (i < 100000) a[i] = i / 10000 + a[9999];
      else if (i < 1000000) a[i] = i / 100000 + a[99999];
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   preCalculate();
   int tt = 1;
   cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}