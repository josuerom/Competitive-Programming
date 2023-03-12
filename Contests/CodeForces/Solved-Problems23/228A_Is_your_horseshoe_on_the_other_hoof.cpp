/**
 *   author:  josuerom
 *   created: 27/11/2022 19:48:47
**/
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int H[4], ans = 0;

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   for (auto &e: H) cin >> e;
   sort(H, H+4);
   for (int i = 0; i < 4; i++) if (H[i]==H[i+1]) ans++;
   cout << ans << endl;
   return 0;
}