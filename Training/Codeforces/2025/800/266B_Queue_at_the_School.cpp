/****************************************************
 * @author:                josuerom                 *
 * @created:            23/11/22 23:23              *
****************************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define TEST_CASE(TC) cin >> TC; while ((TC)--)
#define endl '\n'
#define ull unsigned long long int
#define ll long long
#define ui unsigned int
#define us unsigned short
#define uc unsigned char
#define ld long double
using namespace std;

const ll MAX = 1e9;
const ui MIN = 1e4;
const ui MOD = 1000000007;
const ld PI = 3.1415926535897932384626433832795;

int n, t, k = 0;
string s;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   cin >> n >> t >> s;
   for(int h = 0; h < t; ++h) {
      for(int j = 0; j < n; ++j) {
         if(s[j]=='B' && k==0) k += 1;
         if(s[j]=='G' && k==1) {
            swap(s[j], s[j-1]);
            k = 0;
         }
      }
      k = 0;
   }
   cout << s << endl;
   return 0;
}