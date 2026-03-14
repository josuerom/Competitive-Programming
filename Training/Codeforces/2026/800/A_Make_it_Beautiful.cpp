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

int n, sum, z;
vector<int> a;

void solve() {
   cin >> n;
   for (int i = 0, x; i < n; i++) {
      cin >> x;
      a.push_back(x);
   }
   sort(a.begin(), a.end());
   if (a[0] == a[n - 1]) {
      cout << "NO\n";
      return;
   }
   z = n;
   while (z--) {
      sum = 0;
      for (int i = 0; i < n; i++) {
         if (sum == a[i]) {
            swap(a[i - 1], a[i]);
         }
         sum += a[i];
      }
   }
   cout << "YES\n";
   for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
   }
   a.clear();
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
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
   return 0;
}