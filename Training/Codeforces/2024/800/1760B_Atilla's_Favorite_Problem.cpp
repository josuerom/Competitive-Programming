/****************************************************
* @Author:                josuerom                  *
* @Date:               21/11/22 10:33               *
* @Institute: Minute Of God University Of Colombia  *
****************************************************/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
   int n, ans = 0;
   string s;
   cin >> n >> s;
   sort(s.begin(), s.end());
   char element = char(s[n-1]);
   char A[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for (int i = 0; i < 26; i++) {
      if (A[i]==element) break;
      ans++;
   }
   cout << ++ans << endl;
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   int t; cin >> t;
   while (t--) solve();
   return 0;
}