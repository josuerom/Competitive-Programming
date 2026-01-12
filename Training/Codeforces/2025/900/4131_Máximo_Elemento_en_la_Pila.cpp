/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 24/11/23 23:50:58
**/
#include <bits/stdc++.h>

using namespace std;

struct CompareGreater {
   bool operator()(int a, int b) const {
      return a > b;
   }
};

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   int n, x;
   multiset<int, CompareGreater> ms;
   vector<int> pl;
   while (tt--) {
      cin >> n;
      if (n == 1) {
         cin >> x;
         ms.insert(x);
         pl.push_back(x);
         continue;
      }
      if (n == 2 && !pl.empty()) {
         ms.erase(pl.back());
         pl.pop_back();
         continue;
      }
      if (n == 3 && ms.size() > 0) {
         cout << *ms.begin() << endl;
         continue;
      }
   }
   return 0;
}