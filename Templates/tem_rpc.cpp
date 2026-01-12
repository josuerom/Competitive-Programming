/**
 *   author:  $%U%$
 *   created: $%D%$/$%M%$/$%Y%$
**/
#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long
#define uint unsigned int
#define nl   '\n'

class RPCRound$%R%$_P$%file%$ {
public:
   static const int N = (1e1) + 100;

   void anotherSolution() {
   }

   void readTestCase() {
      int TC; cin >> TC;
#ifdef LOCAL
      for (int i = 1; i <= TC; i++) {
         cout << "Case #" << i << ":\n";
         anotherSolution();
      }
#else
      while (TC--) anotherSolution();
#endif
   }
};

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   RPCRound$%R%$_P$%file%$ in;
   // in.readTestCase();
   // in.anotherSolution();
   return 0;
}