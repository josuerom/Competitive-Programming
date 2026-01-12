/**
*  author:  josuerom
*  created: 24/03/23 00:09
*  complexity: O(tt)
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	short tt;
	cin >> tt;
	while (tt--) {
		short h, m, x;
		char c;
		cin >> h >> c >> m >> x;
		short T = h * 60 + m;
		vector<bool> used(1440, false);
		used[T] = true;
		while (true) {
			T += x;
			T %= 1440;
			if (used[T]) break;
			used[T] = true;
		}
		short ans = 0;
		for (int j = 0; j < 1440; j++) {
			if (used[j]) {
			short hh = j / 60, mm = j % 60;
			if (mm / 10 == hh % 10 && mm % 10 == hh / 10) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
