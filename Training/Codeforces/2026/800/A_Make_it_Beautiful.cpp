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

int n, sum;
vector<int> a;
bool flag;

void solve() {
   cin >> n;
   for (int i = 0, x; i < n; i++) {
      cin >> x;
      a.push_back(x);
   }
   sort(a.rbegin(), a.rend());
   if (a[0] == a[n - 1]) {
      cout << "NO\n";
      a.clear();
      return;
   }
   flag = true;
   while (flag) {
      flag = false;
      sum = a[0];
      for (int i = 1; i < n - 1; i++) {
         if (sum == a[i]) {
            swap(a[i], a.back());
            sum += a[i];
            flag = true;
         } else sum += a[i];
      }
   }
   cout << "YES\n";
   for (auto &e : a) cout << e << " ";
   cout << endl;
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