/**
 *   █▀█  █▀▀▄ ─▀─ ▀▀█▀▀ █▀▀ ▄▀ ▀▄
 *   ─▄▀  █▀▀▄ ▀█▀ ──█── ▀▀█ █─ ─█
 *   █▄▄  ▀▀▀─ ▀▀▀ ──▀── ▀▀▀ ▀▄ ▄▀
 *   created: 12/10/23 18:36:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   char s;
   deque<string> safari;
   int cnt = 0, x = 0, sz = 0;
   while (cin >> s) {
      s = char(toupper(s));
      if (s == 'N') {
         string a; cin >> a;
         safari.push_back(a);
      } else if (s == 'S' && !safari.empty()) {
         cout << safari.front() << '\n';
         safari.pop_front();
      } else if (s == 'C') {
         cin >> x; cnt += x;
      } else if (s == 'A') {
         sz = (int) safari.size();
         if (cnt == 0 || (max(cnt, sz) % min(cnt, sz) != 0)) {
            while (!safari.empty()) {
               cout << safari.back() << '\n';
               safari.pop_back();
            }
            return 0;
         }
         cout << cnt / sz << '\n';
         cnt -= (cnt / sz) * sz;
      } else if (s == 'F') {
         cout << (int) safari.size() << '\n';
      }
   }
   return 0;
}