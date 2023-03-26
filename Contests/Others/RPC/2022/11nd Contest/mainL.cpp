/**
 * @solution implemented for the problem: L. Letterle
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned short us;

void solve(char wd[], int n) {
   for (int j = 0, k = 0, e = 0; j < n+1; j++) {
      if (wd[k] == word[j]) {
         result += (j==k ? "G" : "Y");
      } else {
         ++e;
      }
   }
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   string p, s;
   cin >> p;
   int n;
   n = p.length();
   char word[n+1], wd[n+1];
   strcpy(word, p.c_str());
   for (int i = 0; i < 7; i++) {
      cin >> s;
      string result;
      strcpy(wd, s.c_str());
      solve(wd, n+1);
   }
   return 0;
}