#include <bits/stdc++.h>
#define endl '\n'
#define debug(X) cout << #X << " = " << X << endl
#define fori(i,b,e) for (int i = (b); i < (e); ++i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int INF = 1e9;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	int a = 0, b = 0;
	fori(i, 0, n / 2) {
		int x; cin >> x;
		a += x;
	}
	fori(i, 0, n / 2) {
		int x; cin >> x;
		b += x;
	}
	cout << abs(a - b) << endl;
	return 0;
}