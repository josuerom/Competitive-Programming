// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 27/03/2024 20:40:42

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int a, b, l;

void preCalculate(int a, int b, int l, set<int> &u) {
   if (u.count(l)) return;
   u.insert(l);
   if (l % a == 0) preCalculate(a, b, l / a, u);
   if (l % b == 0) preCalculate(a, b, l / b, u);
}

void solve() {
   cin >> a >> b >> l;
   set<int> used;
   preCalculate(a, b, l, used);
   cout << used.size() << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}