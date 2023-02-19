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
	int n; cin >> n;
	string s; cin >> s;
	if (n == 1) { cout << (s[0] == '1' ? "YES" : "NO") << endl; return 0; }
	s.push_back('1');
	int ok = 1;
	for (int i = 0, prev = -1; i <= n; i++) {
		if (s[i] == '1') {
			if (prev == -1) {
				ok &= (i < 2);
			} else if (i == n) {
				ok &= (n - prev - 1 < 2);
			} else {
				int d = i - prev - 1;
				ok &= (d == 1 || d == 2);
			}
			prev = i;
		}
	}
	cout << (ok ? "YES" : "NO") << endl;
	return 0;
}
