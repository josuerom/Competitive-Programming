#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int oo = 1e9;

int solve(vi v, int k) {
	int n = v.size(), ans = 0;
	fori(i, 1, n) {
		int d = abs(v[i] - v[i - 1] - k);
		if (d > 1) return oo;
		if (d == 1) {
			v[i] = v[i - 1] + k;
			ans++;
		}
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	vi v(n);
	fori(i, 0, n)
		cin >> v[i];
	if (n == 1) { cout << 0 << endl; return 0; }
	int ans = oo;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			v[1] += i, v[0] += j;
			ans = min(ans, solve(v, v[1] - v[0]) + abs(i) + abs(j));
			v[1] -= i, v[0] -= j;
		}
	}
	cout << (ans == oo ? -1 : ans) << endl;
	return 0;
}
