#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int oo = 1e9, MN = 110;

bool solve(vi &v, ii &ans) {
	int n = v.size(), h = -1;
	fori(i, 0, n - 1) {
		if (v[i] == v[i + 1]) return false;
		if (abs(v[i] - v[i + 1]) == 1) continue;
		if (h == -1) h = abs(v[i] - v[i + 1]);
		else if (h != abs(v[i] - v[i + 1])) return false;
	}
	if (h == -1) { ans = ii(oo, 1); return true; }
	fori(i, 1, n) {
		int d = v[i] - v[i - 1];
		if (d == -1 && v[i] % h == 0) return false;
		if (d == 1 && v[i - 1] % h == 0) return false;
	}
	ans = ii(oo, h);
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	vi v(n);
	fori(i, 0, n)
		cin >> v[i];
	ii ans;
	if (solve(v, ans)) {
		cout << "YES" << endl;
		cout << ans.first << " " << ans.second << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
