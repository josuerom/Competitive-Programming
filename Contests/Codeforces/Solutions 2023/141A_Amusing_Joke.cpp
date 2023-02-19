/**
 *   author:  josuerom
 *   created: 18/02/23 00:41:26
**/
#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define endl '\n'

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   string a, b, c;
   cin >> a >> b >> c;
   sort(all(c));
   a += b;
   sort(all(a));
   cout << (a==c ? "YES" : "NO") << endl;
   return 0;
}