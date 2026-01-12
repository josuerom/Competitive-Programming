/**
 *  author:  josuerom
 *  created: 2/05/23 0:42:27
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

#define all(a) (a).begin(), (a).end()
#define len(a) int(size((a)))
#define sz(a) int((a).size())
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int Y, W;
   cin >> Y >> W;
   Y = 7 - max(Y, W);
   if (Y==1 || Y==5) cout << Y << "/6\n";
   else if (Y==6) cout << "1/1\n";
   else if (Y==4) cout << "2/3\n";
   else if (Y==3) cout << "1/2\n";
   else cout << "1/3\n";
   return 0;
}