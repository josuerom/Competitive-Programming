/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 24/03/24 12:39:42
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e4;
const int INF = 1e9;
int memo[N][N], a[N];
int n, x;

/// Saber la cantidad minima de numeros de a, que sumados pueden formar x
int knapsack(int x, int i) {
   if (i == n) return x == 0 ? 0 : INF;
   if (x < 0) return INF;
   if (memo[x][i] != -1) return memo[x][i]; 
   return memo[x][i] = min(knapsack(x, i + 1), knapsack(x - a[i], i) + 1);
}

int main() {
   cin >> n;
   for (int i = 0; i < n; i++) cin >> a[i];
   cin >> x;
   memset(memo, -1, sizeof memo);
   cout << knapsack(x, 0) << endl;
   return 0;
}