/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 24/03/24 12:39:42
**/
#include <bits/stdc++.h>

using namespace std;

const int N = (int) 1e4;
int memo[N][N], a[N];
int n, x;

/// Para saber si se puede formar x usando los elementos de a (repetidos y no)
int knapsack(int x, int i) {
   if (i == n) return x == 0;
   if (x < 0) return 0;
   if (memo[x][i] != 0) return memo[x][i];
   return memo[x][i] = knapsack(x, i + 1) || knapsack(x - a[i], i); 
}

int main() {
   cin >> n;
   for (int i = 0; i < n; i++) cin >> a[i];
   cin >> x;
   memset(memo, -1, sizeof memo);
   cout << (knapsack(x, 0) == 1 ? "YES" : "NO") << endl;
   return 0;
}