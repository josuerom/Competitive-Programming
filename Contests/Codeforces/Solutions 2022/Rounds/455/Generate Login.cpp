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
	string first, last; cin >> first >> last;
	int n = first.size(), m = last.size();
	string ans = first + last;
	fori(i, 0, n)
		fori(j, 0, m)
			ans = min(ans, first.substr(0, i + 1) + last.substr(0, j + 1));
	cout << ans << endl;
	return 0;
}