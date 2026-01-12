/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;
#define ull long long int

void solve() {
   ull a, b; cin >> a >> b;
   if (a==1 && b==1)
      cout << "0\n";
   else if (a==1 && b>2 || b==1 && a>2)
      cout << "-1\n";
   else if (a%2==0 && b%2!=0 || a%2!=0 && b%2==0)
      cout << (max(a, b)*2)-3 << "\n";
   else if (a==b || a%2==0 && b%2==0 || a%2!=0 && b%2!=0)
      cout << (max(a, b)*2)-2 << "\n";
}

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   short tc; cin >> tc;
   while (tc--) solve();
   return 0;
}