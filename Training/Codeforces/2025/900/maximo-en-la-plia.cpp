// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 21/03/2024 15:15:06

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e1;
int n, m;
multiset<int> mls;
vector<int> v;

void solve() {
   cin >> n;
   if (n == 1) {
      cin >> m;
      v.push_back(m);
      mls.insert(m);
      return;
   }
   if (n == 2 && !v.empty()) {
      mls.erase(mls.find(v.back()));
      v.pop_back();
      return;
   }
   cout << *mls.rbegin() << br;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}
