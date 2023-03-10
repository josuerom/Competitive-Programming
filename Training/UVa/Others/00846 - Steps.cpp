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

const int oo = 1e9;

ll getDist(ll n) { return (n % 2) ? sq(n + 1) * 0.25 : (sq(n + 1) - 1) * 0.25; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		int d = b - a;
		if (d == 0) { cout << 0 << endl; continue; }
		int low = 0, high = oo;
		while (high - low > 1) {
			int mid = (high + low) * 0.5;
			if (getDist(mid) >= d)
				high = mid;
			else
				low = mid;
		}
		cout << high << endl;
	}
	return 0;
}