/**
 *   author:  josuerom
 *   created: 18/02/23 20:49:25
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define readArray(vec) void template<typename T> void read(vector<T>&(vec)){int n=(vec).size();for(auto&e:vec) cin >> e;}
#define SPEED_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define PROGRAM_TIME cout << "max time " << (int)clock()/(CLOCKS_PER_SEC/100) << " ms\n"
#define VEREDICT(condition) cout << ((condition) ? "YES\n" : "NO\n") << endl
#define decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n+1);
#define binarySearch(vec, key) sort(all(vec)); binary_search(all(vec), (key));
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define mod(a, b, mod) ((((a) % (mod)) + ((b) % (mod))) % (mod))
#define fori(i, b, c) for(int (i) = (b); (i) < (c); (i)++)
#define rall(vec) (vec).rbegin(), (vec).rend()
#define all(vec) (vec).begin(), (vec).end()
#define fore(e, vec) for (auto &(e): (vec))
#define isOrdered(vec) is_sorted(all(vec))
#define rsort(vec) short(rall(vec))
#define sz(vec) (int)(vec).size()
#define sort(vec) sort(all(vec))
#define mcd(a, b) gcd(a, b)
#define ull unsigned long long int
#define END() return 0
#define ll long long
#define endl '\n'

void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)

const ll MAX = 1e9;
int tt;

int main() {
	SPEED_IO;
	// The code here
	END();
}