/**
 *   author:  josuerom
 *   created: 11/10/23 14:48:35
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define pb  push_back
#define br  '\n'

const int N = 1e6 + 1; /// INT_MAX
vector<int> primes;
int n, k;

void preCalculatePrime() {
   vector<bool> is_prime(N, true);
   is_prime[0] = is_prime[1] = false;
   for (int i = 2; i * i <= N; i++) {
      if (is_prime[i]) {
         for (int j = i * i; j <= N; j += i) {
            is_prime[j] = false;
         }
      }
   }
   for (int i = 2; i <= N; i++) {
      if (is_prime[i]) {
         primes.push_back(i);
      }
   }
}

void solve() {
   cin >> n >> k;
   if (n % 2 == 0) {
      cout << n + 2 * k << br;
   } else {
      int d = 0;
      for (int i = 0; i < (int) primes.size(); i++) {
         if (n % primes[i] == 0) {
            d = primes[i]; break;
         }
      }
      cout << n + 2 * (k - 1) + d << br;
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   preCalculatePrime();
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