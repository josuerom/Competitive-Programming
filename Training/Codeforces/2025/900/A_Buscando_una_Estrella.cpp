/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 12/10/23 21:28:10
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   multiset<long long> ms;
   long long n, mx = 0;
   while (tt--) {
      char s; cin >> s;
      s = char(toupper(s));
      if (s == 'R') {
         cin >> n;
         ms.insert(n);
         mx = max(mx, n);
      } else if (s == 'S') {
         if (ms.size() < 3) {
            cout << "NO HAY SUFICIENTES PUNTAJES\n";
            continue;
         }
         auto it = ms.begin();
         cout << *it++ <<" "<< *it++ <<" "<< *it << '\n';
      } else if (s == 'B' && !ms.empty()) {
         ms.erase(ms.begin());
      }
   }
   if (ms.empty()) cout << "NO HUBO GANADOR\n";
   else cout << "EL PUNTAJE MAS ALTO FUE " << mx << '\n';
   return 0;
}