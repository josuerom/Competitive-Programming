/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 14/11/23 16:48:39
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   stack<long long> pl;
   string s;
   long long n;
   while (tt--) {
      cin >> s;
      if (s == "AGREGA") {
         cin >> n;
         pl.push(n);
      } else if (s == "CONSUME" && pl.size() >= 2) {
         int x = pl.top(); pl.pop();
         int y = pl.top(); pl.pop();
         pl.push(x + y);
      } else if (!pl.empty()) cout << pl.top() << endl;
   }
   return 0;
}