#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define mod(x,m) ((((x) % (m)) + (m)) % (m))
#define sq(x) (x) * (x)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int oo = 1e9, mxn = 8;

int points[mxn][mxn];

bool check(vi& v) {
	fori(i, 0, mxn)
		fori(j, 0, i)
			if (v[i] == v[j] || abs(i - j) == abs(v[i] - v[j]))
				return false;
	return true;
}

int score(vi& v) {
	int ans = 0;
	fori(i, 0, mxn)
		ans += points[v[i]][i];
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--) {
		fori(i, 0, mxn)
			fori(j, 0, mxn)
				cin >> points[i][j];
		vi v(mxn);
		fori(i, 0, mxn) v[i] = i;
		int ans = 0;
		do {
			if (check(v))
				ans = max(ans, score(v));
		} while (next_permutation(v.begin(), v.end()));
		cout << setw(5) << ans << endl;
	}
	return 0;
}