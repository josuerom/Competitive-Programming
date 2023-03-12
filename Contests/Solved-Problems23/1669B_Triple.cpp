/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define size(vec) (int)vec.size()
#define sort(vec) sort(vec.begin(), vec.end())

void solve() {
   int n, rn, cont=0, j;
   cin >> n;
   vector<int> vec(n);
   for (auto& e : vec) cin >> e;
   sort(vec);
   if (n>=2) {
      for (int i = size(vec)-1; i >= 1; i--) {
         j = i-1;
         if (vec[i] != vec[j]) {
            cont = 0;
            rn = -1;
            continue;
         } else {
            if (++cont==2) {
               rn = vec[i];
               break;
            }
         }
      }
      cout << rn << "\n";
   } else {
      cout << "-1\n";
   }
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int tc; cin >> tc;
   while (tc--) solve();
   return 0;
}