// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 01/03/2024 13:34:47

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 31;
char pi[N] = "314159265358979323846264338327";
char s[N];
int n, ans;

void solve() {
   cin >> s;
   n = strlen(s), ans = 0;
   for (int i = 0; i < n; i++) {
      if (s[i] == pi[i]) ans++;
      else break;
   }
   cout << ans << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}