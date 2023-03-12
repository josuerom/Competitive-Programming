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
	int n, k; cin >> n >> k;
	map<int, int> f;
	fori(i, 0, n) {
		int x; cin >> x;
		f[x] = i;
	}
	if (f.size() < k) { cout << "NO" << endl; return 0; }
	cout << "YES" << endl;
	for (auto x : f) {
		if (k == 0) break;
		cout << x.second + 1 << " ";
		k--;
	}
	cout << endl;
	return 0;
}
