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

int n, x, m;
unordered_map<int, int> mp;

void solve() {
   cin >> n >> x >> m;
   for (int i = 0, x; i < m; i++) {
      cin >> x;
      mp[x] += 1;
   }
   int a = 0, b = 0;
   for (auto &e : mp) {
      a += e.first < x ? e.second : 0;
      b += e.first >= x ? e.second : 0;
   }
   cout << min(a, b) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   //cin >> tt;
#ifdef LOCAL
   for (int i = 1; i <= tt; i++) {
      cout << "Case #" << i << ":\n";
      solve();
   }
#else
   while (tt--) solve();
#endif
}