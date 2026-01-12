/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
#define endl '\n'
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   unsigned int a, b, c, ans;
   cin >> a >> b >> c;
   ans = a+b*c;
   ans = (ans>a*(b+c) ? ans : a*(b+c));
   ans = (ans>a*b*c ? ans : a*b*c);
   ans = (ans>(a+b)*c ? ans : (a+b)*c);
   ans = (ans>a+b+c ? ans : a+b+c);
   cout << ans << endl;
   return 0;
}