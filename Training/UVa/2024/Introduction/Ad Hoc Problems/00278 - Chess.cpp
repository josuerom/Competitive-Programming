#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int oo = 1e9;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int tc; cin >> tc;
	while (tc--) {
		char c; cin >> c;
		int n, m; cin >> n >> m;
		if (c == 'r')
			cout << min(n, m) << endl;
		if (c == 'k')
			cout << (n * m + 1) / 2 << endl;
		if (c == 'Q')
			cout << min(n, m) << endl;
		if (c == 'K')
			cout << ((n + 1) / 2) * ((m + 1) / 2) << endl;
	}
	return 0;
}
