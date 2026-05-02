/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
**/
#include <bits/stdc++.h>
using namespace std;

#define long  unsigned long long
#define endl  '\n'

const int MAX = 1e1 + 100;
long n, x;
vector<long> a;

void solve() {
   cin >> n >> x;
   a.push_back(x);
   int res = 0;
   for (int i = 1; i < (int) n; i++) {
      cin >> x;
      if (a.back() % 2 == 0 && x % 2 == 0) {
         a.push_back(a.back() * x);
         res++;
      } else if (a.back() % 2 != 0 && x % 2 != 0) {
         a.push_back(a.back() * x);
         res++;
      } else a.push_back(x);
   }
   cout << res << endl;
   a.clear();
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
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