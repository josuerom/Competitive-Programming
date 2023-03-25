/**
 *  author:  josuerom
 *  created: 24/03/23 23:06
 *  complexity: O(n)
 **/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if ((x/i)*i == x && i <= n && x/i <= n) ans += 1;
	}
	cout << ans << '\n';
	return 0;
}
