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

bool check(int n) {
	int acc = 0;
	fori(i, 0, 3)
		acc += n % 10, n /= 10;
	fori(i, 0, 3)
		acc -= n % 10, n /= 10;
	return acc == 0;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int x; cin >> x;
	int ans = x + 1;
	while (!check(ans)) ans++;
	cout << ans << endl;
	return 0;
}