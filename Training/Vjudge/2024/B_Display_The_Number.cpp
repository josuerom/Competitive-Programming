/**
 *  author:  josuerom
 *  created: 24/03/23 21:23
 *  complexity: O(tt * log2(n))
 **/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	short tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string ans = "";
		for(int i = 0; i < n/2; i++) ans += '1';
		if (n%2) ans[0] = '7';
		cout << ans << '\n';
	}
	return 0;
}
