/**
 *   author:  josuerom
 *   created: 29/11/22 19:20:01
**/
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int maxX = -101, minX = 101, maxY = -101, minY = 101, ans = 0;
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (x == 0) {
       minY = min(minY, y);
       maxY = max(maxY, y);
    }
    if (y == 0) {
      minX = min(minX, x);
      maxX = max(maxX, x);
    }
  }
  if (maxX != -101) ans += abs(maxX) + abs(maxX-minX) + abs(minX);
  if (maxY != -101) ans += abs(maxY) + abs(maxY-minY) + abs(minY);
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int tc;
  cin >> tc;
  while (tc--) solve();
  return 0;
}