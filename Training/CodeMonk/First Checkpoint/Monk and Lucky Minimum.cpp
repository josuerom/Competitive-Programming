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
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vi v(n);
		fori(i, 0, n)
			cin >> v[i];
		int min_val = *min_element(v.begin(), v.end());
		int cnt = 0;
		fori(i, 0, n)
			cnt += (v[i] == min_val);
		cout << (cnt % 2 ? "Lucky" : "Unlucky") << endl;
	}
	return 0;
}