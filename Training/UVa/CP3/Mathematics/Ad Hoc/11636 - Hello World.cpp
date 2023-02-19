// Logarithm, Exponentiation, Power
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
	int n, cs = 0;
	while (cin >> n && n >= 0) {
		cout << "Case " << ++cs << ": " << ceil(log((double)n) / log(2.0)) << endl;
	}
	return 0;
}