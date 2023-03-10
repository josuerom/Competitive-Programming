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
	int t, cs = 0; cin >> t;
	while (t--) {
		cout << "Case " << ++cs << ": ";
		double d, v, u; cin >> d >> v >> u;
		if (u > v && v) {
			double ans = d / (u * cos(asin(v / u))) - d / u;
			cout << fixed << setprecision(3) << ans << endl;
		} else {
			cout << "can't determine" << endl;
		}
	}
	return 0;
}