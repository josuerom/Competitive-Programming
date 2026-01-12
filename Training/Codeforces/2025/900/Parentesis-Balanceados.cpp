// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 21/03/2024 15:28:45

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e1;
string s;
int n;

void solve() {
   cin >> s;
   n = s.size();
   if (n % 2 == 1 || s[0] == ')' || s[0] == '}' || s[0] == ']'
      || s[n-1] == '(' || s[n-1] == '{' || s[n-1] == '[') {
      cout << "NO\n";
      return;
   }
   stack<char> pl;
   bool ans = 1;
   for (int i = 0; i < n; i++) {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
         pl.push(s[i]); 
         continue;
      }
      if (!pl.empty() && s[i] == ')' && pl.top() == '(') pl.pop();
      else if (!pl.empty() && s[i] == '}' && pl.top() == '{') pl.pop();
      else if (!pl.empty() && s[i] == ']' && pl.top() == '[') pl.pop();
      else { ans = 0; break; }
   }
   cout << (ans ? "SI" : "NO") << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
