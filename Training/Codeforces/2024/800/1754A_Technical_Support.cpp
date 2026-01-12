/****************************************************
 * @author:                josuerom                 *
 * @created:            23/11/22 17:49              *
****************************************************/
#pragma GCC optimize("02,unroll-loops")
#include <bits/stdc++.h>

using namespace std;
#define TEST_CASE(TC) cin >> TC; while ((TC)--)
#define endl '\n'
#define ull unsigned long long int
#define ll long long
#define ui unsigned int
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "[" << #__VA_ARGS__ <<"]:", dbg_out(__VA_ARGS__)

short tc, n, c;
string s;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   cin >> tc;
   while (tc--) {
      cin >> n >> s;
      vector<char> v;
      c = 0;
      for(auto &it: s) {
         if(it=='Q') { v.emplace_back(it); c=1; }
         else if (c==0) { cout << "No\n"; break; }
         else if (!v.empty()) v.pop_back();
      }
      if (!v.empty()) cout<<"No\n";
      else cout<<"Yes\n";
   }
   return 0;
}