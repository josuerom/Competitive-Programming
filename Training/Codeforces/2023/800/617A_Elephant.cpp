/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int x;
   cin >> x;
	cout << (x % 5 == 0 ? x / 5 : x / 5 + 1) << '\n';
   return 0;
}