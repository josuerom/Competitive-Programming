/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 24/03/24 13:07:05
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 10 + 1e3;
int a[N];

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt; cin >> tt;
   while(tt--) {
      cin >> n >> k;
      memset(memo, -1, sizeof memo);
      iota(a, a + n, 1);
      int x = knap(k, 0);
      cout << x << endl;
   }
   return 0;
}