// Powered by CP Editor (https://cpeditor.org)
// author:  josuerom
// created: 17/03/2024 15:54:26

#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e5;
int n, d[N], p[N], curr;

void solve() {
   cin >> n;
   for(int i = 0; i < n; i++)
      cin >> d[i];
   for(int i = 0; i < n; i++)
      cin >> p[i];
   stack<int> st;
   for (int i = 0, l = 0; i < n; l++) {
      cout << p[i] << br;
      curr += d[l];
      if (curr >= n) {
         for (int j = i + 1; j < n; j++) st.push(p[j]);
         break;
      }
      for (int j = i + 1; j < curr; j++) st.push(p[j]);
      i = curr;
   }
   while (!st.empty()) {
      cout << st.top() << br;
      st.pop();
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
