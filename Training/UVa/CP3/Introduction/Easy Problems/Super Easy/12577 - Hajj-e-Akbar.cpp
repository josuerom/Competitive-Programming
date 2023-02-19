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
	int cs = 0;
	string s;
	while (cin >> s && s != "*") {
		cout << "Case " << ++cs << ": ";
		if (s == "Hajj")
			cout << "Hajj-e-Akbar" << endl;
		else
			cout << "Hajj-e-Asghar" << endl;
	}
	return 0;
}