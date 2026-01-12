/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 21/10/23 16:58:04
**/
#include <bits/stdc++.h>

#define long  long long
#define endl  '\n'

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   const int N = 150;
   char s[N]{};
   int tt;
   cin >> tt;
   cin.ignore();
   while (tt--) {
      cin.getline(s, N, '\n');
      int n = strlen(s);
      if (n == 0) {
         cout << "Yes\n";
         continue;
      }
      if (n % 2 != 0 || s[0] == ')' || s[0] == ']') {
         cout << "No\n";
         continue;
      }
      stack<char> pl;
      bool error = 0;
      for (int i = 0; i < n; i++) {
         if (s[i] == '(' || s[i] == '[') pl.push(s[i]);
         else if (!pl.empty()) {
            if ((s[i] == ')' && pl.top() == '(') || (s[i] == ']' && pl.top() == '[')) pl.pop();
         } else {
            error = 1;
            break;
         }
      }
      cout << (error || !pl.empty() ? "No" : "Yes") << endl;
   }
   return 0;
}