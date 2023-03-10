// C++ STL map
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
	vi order;
	map<int, int> mapper;
	int n;
	while (cin >> n) {
		if (mapper[n] == 0)
			order.push_back(n);
		mapper[n]++;
	}
	fori(i, 0, order.size())
		cout << order[i] << " " << mapper[order[i]] << endl;
	return 0;
}