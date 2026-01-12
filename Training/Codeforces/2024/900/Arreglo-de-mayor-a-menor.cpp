// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 17/03/2024 19:13:23

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

int n;
vector<int> v;

void solve() {
   for (int i = 0; i < 5; i++) {
      cin >> n;
      v.push_back(n);
   }
   sort(v.begin(), v.end());
   while (!v.empty()) cout << v.back() << " ", v.pop_back();
   cout << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
