/**
 *  author:  josuerom
 *  created: 29/11/22 19:56:29
**/
#include <bits/stdc++.h>

#define sz(a) ((int)a.size())
using namespace std;

int query(int &a, int &b) {
    cout << "? " << a << " " << b << endl;
    int cmp; cin >> cmp;
    return cmp;
}
void ans(int &x) {
    cout << "! " << x << endl;
}
void solve() {
    int n; cin >> n; 
    vector<int> index; 
    for(int i = 1; i <= (1ll << n); i++) {
        index.push_back(i);
    }
    while(true) {
        if(sz(index) == 2) {
            if(query(index[0], index[1]) == 1) {
                ans(index[0]);
            } 
            else {
                ans(index[1]);
            }
            return;
        }
        vector<int> newIndex;
        for(int i = 0; i < sz(index); i += 4) {
            int cmp = query(index[i], index[i + 2]);  
            if(cmp == 0) {
                newIndex.push_back(index[i + 1]); 
                newIndex.push_back(index[i + 3]); 
                continue;
            }
            if(cmp == 1) {
                newIndex.push_back(index[i]); 
                newIndex.push_back(index[i + 3]); 
                continue;
            }
            if(cmp == 2) {
                newIndex.push_back(index[i + 2]); 
                newIndex.push_back(index[i + 1]); 
            }
        }
        swap(index, newIndex);
    }
}
int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int tc; cin >> tc;
  while(tc--) solve();
  return 0;
}