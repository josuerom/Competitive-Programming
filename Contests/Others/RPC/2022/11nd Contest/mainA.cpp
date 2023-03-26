/**
 * @solution problem A. Football Scoring in C++
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned short us;

void solve() {
   ll t,f,s,p,c, rt,rf,rs,rp,rc;
   cin >> t>>f>>s>>p>>c;
   cin >> rt>>rf>>rs>>rp>>rc;
   cout << (t*6+f*3+s*2+p+c*2) << " " << (rt*6+rf*3+rs*2+rp+rc*2) << endl;
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
   solve();
   return 0;
}