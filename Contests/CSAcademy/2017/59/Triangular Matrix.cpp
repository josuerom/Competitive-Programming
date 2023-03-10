#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define mod(x,m) ((((x) % (m)) + (m)) % (m))
#define sq(x) (x) * (x)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int oo = 1e9;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	int n; cin >> n;
	vi curr(n);

	string ans(n, ' ');

	string line; cin >> line;
	ans[0] = line[0];
	curr[0] = 1;

	fori(i, 1, n) {
		cin >> line;

		vi prev = curr;
		curr.assign(n, 0);

		char mmin = 'z';
		fori(j, 0, i + 1)
			if (prev[j] || (j - 1 >= 0 && prev[j - 1]))
				mmin = min(mmin, line[j]);

		ans[i] = mmin;

		fori(j, 0, i + 1)
			if (line[j] == mmin && (prev[j] || (j - 1 >= 0 && prev[j - 1])))
				curr[j] = 1;
	}

	cout << ans << endl;

	return 0;
}