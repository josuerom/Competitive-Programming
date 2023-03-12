/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

void solve() {
   short r; cin >> r;
   if (r >= 1900) cout << "Division 1\n";
   else if (r >= 1600 && r <= 1899) cout << "Division 2\n";
   else if (r >= 1400 && r <= 1599) cout << "Division 3\n";
   else cout << "Division 4\n";
}

int main() {
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   short tc; cin >> tc;
   while (tc--) solve();
   return 0;
}