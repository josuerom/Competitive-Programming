#include <iostream>
#include <vector>
#define MAX 1e5
#define C 2
using namespace std;
typedef long long ll;

vector<ll, ll> matriz(MAX, MAX);
vector<ll, ll> queris(MAX, C);

int main() {
    ios::sync_with_stdio(false);
    ll n, Q, q, sz, c=0;
    cin >> n >> Q;
    q = Q;
    while (n--) {
        cin >> sz;
        for (ll i = 0; i < sz; i++) cin >> matriz[c][i];
        c++;
    }
    c=0;
    while (q--) {
        for (ll j = 0; j < 2; j++) cin >> queris[c][j];
        c++;
    }
    for (ll j = 0; j < Q; j++) {
        if (j<Q-1) cout << matriz[queris[j][0]][queris[j][1]] << '\n';
        else cout << matriz[queris[j][0]][queris[j][1]];
    }
    return 0;
}