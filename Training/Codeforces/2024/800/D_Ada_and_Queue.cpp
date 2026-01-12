/**
 *   author:  josuerom
 *   created: 10/10/23 21:24:51
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll   long long
#define pb   push_back
#define mp   make_pair
#define se   second
#define fi   first

deque<int> dq;
int n, x;
string s;
bool flag = 1;

void sequenceOne(deque<int> &dq, string &s) {
   if (s == "push_back" || s == "toFront") {
      cin >> x;
      if (s == "push_back") dq.push_back(x);
      else dq.push_front(x);
   } else if (s == "back" || s == "front") {
      if (!dq.empty()) {
         if (s == "back") {
            cout << dq.back() << endl;
            dq.pop_back();
         } else {
            cout << dq.front() << endl;
            dq.pop_front();
         }
      } else cout << "No job for Ada?" << endl;
   }
}

void sequenceTwo(deque<int> &dq, string &s) {
   if (s == "push_back" || s == "toFront") {
      cin >> x;
      if (s == "push_back") dq.push_front(x);
      else dq.push_back(x);
   } else if (s == "back" || s == "front") {
      if (!dq.empty()) {
         if (s == "back") {
            cout << dq.front() << endl;
            dq.pop_front();
         } else {
            cout << dq.back() << endl;
            dq.pop_back();
         }
      } else cout << "No job for Ada?" << endl;
   }
}

void solve() {
   cin >> s;
   if (s == "reverse") flag = !flag;
   else {
      if (flag) sequenceOne(dq, s);
      else sequenceTwo(dq, s);
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}