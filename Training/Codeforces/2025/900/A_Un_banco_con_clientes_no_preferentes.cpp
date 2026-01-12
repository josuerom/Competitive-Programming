/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 09/10/23 21:40:58
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   queue<string> c;
   stack<string> p;
   while (tt--) {
      char s;
      int n;
      cin >> s >> n;
      if (s == 'E') {
         string m; cin >> m;
         if (n == 1) c.push(m);
         else p.push(m);
      } else if (n == 1) {
         if (!c.empty()) {
            cout << c.front() << endl;
            c.pop();
         }
      } else {
         if (!p.empty()) {
            cout << p.top() << endl;
            p.pop();
         }
      }
   }
   return 0;
}