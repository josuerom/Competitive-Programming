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
	int n; cin >> n;
	string s; cin >> s;
	map<char, int> mapper;
	fori(i, 0, s.size())
		mapper[s[i]]++;
	int ans = -1;
	fori(i, 0, s.size())
		if (ans == -1 && mapper[s[i]] == 1)
			ans = s[i];
	if (ans != -1)
		cout << (char)ans << endl;
	else
		cout << -1 << endl;
	return 0;
}