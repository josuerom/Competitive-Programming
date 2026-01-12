/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 09/10/23 20:56:49
**/
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n, x = 0;
   cin >> n;
   vector<int> co, ct;
   for (int i = 0; i < n; i++) {
      cin >> x;
      co.push_back(x);
   }
   for (int i = 0; i < n; i++) {
      cin >> x;
      ct.push_back(x);
   }
   function<queue<int>(vector<int>, vector<int>)> Queue = [&](vector<int> co, vector<int> ct) {
      queue<int> res;
      for (int i = 0; i < n; i++) {
         res.push(co[i]);
         res.push(ct[i]);
      }
      return res;
   };
   queue<int> ans = Queue(co, ct);
   n = ans.size();
   for (int i = 0; i < n; i++) {
      cout << ans.front() << " \n"[i == n - 1];
      ans.pop();
   }
   return 0;
}