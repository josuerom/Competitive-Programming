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
	int n, q; cin >> n >> q;
	vector<ll> a(n + 1);
	fori(i, 0, n)
		cin >> a[i + 1];
	fori(i, 1, n + 1)
		a[i] += a[i - 1];
	vector<ll> k(q);
	fori(i, 0, q)
		cin >> k[i];
	int curr = 1;
	ll r = a[1];
	fori(i, 0, q) {
		ll x = k[i] - r + a[curr];
		int next = upper_bound(a.begin(), a.end(), x) - a.begin();
		if (next == n + 1) {
			curr = 1;
			r = a[1];
		} else {
			curr = next;
			r = a[next] - x;
		}
		cout << n - curr + 1 << endl;
	}
	return 0;
}
