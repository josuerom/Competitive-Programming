#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 3;
struct col() {
   int a;
   int b;
   string s;
} tes[N];

void solve() {
   for (int i = 0; i < 3; i++) {
      cin >> tes[i].a >> tes[i].b >> tes[i].s;
   }
   for (int i = 0; i < 3; i++) {
      // cout << tes[i].a <<" "<< tes[i].b <<" "<< tes[i].s << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}