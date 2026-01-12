/**
 *  author:  josuerom
 *  created: 17/02/23 22:29:12
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   char s[1007];
   cin.getline(s, 1007, '\n');
   int size = strlen(s);
   vector<char> ch;
   for (int i = 0; i < size; i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
         ch.push_back(s[i]);
      }
   }
   sort(ch.begin(), ch.end());
   auto last = unique(ch.begin(), ch.end());
   ch.erase(last, ch.end());
   cout << ch.size() << '\n';
   return 0;
}