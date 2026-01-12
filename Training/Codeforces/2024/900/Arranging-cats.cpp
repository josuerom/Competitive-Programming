// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 27/03/2024 21:05:32

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e5;
char s[N], f[N];
int n;

void solve() {
   cin >> n >> s >> f;
   int a = 0, b = 0;
   for (int i = 0; i < n; i++) {
      if (s[i] == '0' && f[i] == '1') a++;
      if (s[i] == '1' && f[i] == '0') b++;
   }
   cout << max(a, b) << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}