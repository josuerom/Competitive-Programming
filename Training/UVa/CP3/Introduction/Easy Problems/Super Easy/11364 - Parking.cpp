// Time: 05:35min
#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define mod(x,m) ((((x) % (m)) + (m)) % (m))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int INF = 1e9;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int min_val = 100, max_val = -1;
		while (n--) {
			int x; cin >> x;
			min_val = min(min_val, x);
			max_val = max(max_val, x);
		}
		cout << 2 * (max_val - min_val) << endl;
	}
	return 0;
}