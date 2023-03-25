/**
 *  author:  josuerom
 *  created: 24/03/23 19:53
 *  complexity: O(tt)
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	short tt, n;
	cin >> tt;
	n = tt;
	double ans = 0;
	while (tt--) {
		double p;
		cin >> p;
		ans += double(p);
	}
	cout << setprecision(12) << (ans/n) << fixed << '\n';
	return 0;
}
