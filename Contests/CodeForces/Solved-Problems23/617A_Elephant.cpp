/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int x, ans=0;
   cin >> x;
	if (x>5) {
		ans = x/5;
		x -= 5*ans;
	}
	if (x==5) ans++;
	else if (x==4) ans++;
	else if (x==3) ans++;
	else if (x==2) ans++;
	else if (x==1) ans++;
	cout << ans << "\n";
   return 0;
}