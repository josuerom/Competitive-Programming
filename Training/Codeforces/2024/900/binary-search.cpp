#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

// Algoritmo de la búsqueda binaria
void solve() {
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   
   int x, mid, l = 0, r = 10;
   cin >> x;
   while (l <= r) {
      mid = (l + r) / 2;
      if (a[mid] == x) break;
      if (a[mid] > x) {
         r = mid;
         mid = (l + r) / 2;
      }
      if (a[mid] < x) {
         l = mid;
         mid = (l + r) / 2;
      }
   }
   cout << "a[x]: " << mid << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}