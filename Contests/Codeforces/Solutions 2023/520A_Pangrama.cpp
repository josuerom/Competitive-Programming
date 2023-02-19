/**
 *  author:  josuerom
 *  created: 17/02/23 21:18:34
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int N;
   string s;
   cin >> N >> s;
   if (N < 26) cout << "NO\n";
   else {
      for (int i = 0; i < N; i++) {
         s[i] = tolower(s[i]);
      }
      sort(s.begin(), s.end());
      auto last = unique(s.begin(), s.end());
      s.erase(last, s.end());
      cout << (s.size()==26 ? "YES" : "NO") << '\n';
   }
   return 0;
}