/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <vector>
using namespace std;
#define int long long

int MCD(int a, int b) {
   int temp=0;
   while (b != 0) {
      temp = b;
      b = a%b;
      a = temp;
   }
   return a;
}

void solve() {
   int n, g=0;
   cin >> n;
   vector<int> a(n);

   for (int &e : a) cin >> e, g = MCD(g, e);
   if (g == 1) {
		cout << "0\n";
		return;
	}
	if (MCD(g, MCD(a[n - 1], n)) == 1) {
		cout << "1\n";
		return;
	}
	if (n > 1 && MCD(g, MCD(a[n - 2], n - 1)) == 1) {
		cout << "2\n";
		return;
	}
	cout << "3\n";
}

int32_t main() {
   ios::sync_with_stdio(false); cin.tie(0);
   #ifndef ONLINE_JUGDE
      freopen("inpupt.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   short t; cin >> t;
   while (t--) solve();
   return 0;
}