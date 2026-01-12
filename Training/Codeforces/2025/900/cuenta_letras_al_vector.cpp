// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 20/03/2024 10:35:57

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

string s;
int n;
map<char, int> mp;

void solve() {
   for (char c = 'a'; c <= 'z'; c++) mp[c] = 0;
   cin >> s;
   n = s.size();
   for (int i = 0; i < n; i++) mp[s[i]] += 1;
   for (auto &e : mp) cout << e.second << " ";
   cout << br;
   for (auto &e : mp) {
      if (e.second != 0) printf("La letra %c aparece %d veces\n", e.first, e.second);
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