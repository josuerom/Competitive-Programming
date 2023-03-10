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

const int oo = 1e9, MAXN = 10010;
int A[MAXN];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	while (cin >> n) {
		fori(i, 0, n)
			cin >> A[i];
		int acc = accumulate(A, A + n, 0);
		if (acc % n == 0) {
			int ans = 0;
			fori(i, 0, n)
				ans += abs(A[i] - acc / n);
			cout << 1 + ans / 2 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}