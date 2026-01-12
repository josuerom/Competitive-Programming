// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 01/03/2024 14:09:11

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int a, b, c;
int x, y, z;

void solve() {
   cin >> a >> b >> c;
   x = max(0, max(b, c) + 1 - a);
   y = max(0, max(a, c) + 1 - b);
   z = max(0, max(a, b) + 1 - c);
   printf("%d %d %d\n", x, y, z);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}