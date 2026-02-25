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

int n;
vector<int> a(20);
bool flag;

void solve() {
   a.clear();
   cin >> n;
   for (int i = 0; i < n; i++) cin >> a[i];
   if (a[0] != 1) {
      cout << "NO\n";
      return;
   }
   flag = true;
   while (flag) {
      flag = false;
      for (int i = 1; i < n - 1; i++) {
         if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
            flag = true;
         }
      }
   }
   bool res = 1;
   for (int j = 0; j < n; j++) {
      if (a[j] != j + 1) res = 0;
   }
   cout << (res ? "YES\n" : "NO\n");
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
}