/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define _CRT_SECURE_NO_WARNINGS
#define speed ios::sync_with_stdio(false); cin.tie(0);
#define fori(i, k, n) for (int i = k; i < n; i++)
#define ford(i, k, n) for (int i = k; i >= n; i--)
#define ff first
#define ss second
#define pb push_back

#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <stack>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <numeric>
#include <iomanip>
#include <string>
#include <chrono>
#include <complex>
#include <random>
#include <math.h>

using namespace std;
typedef unsigned short us;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long int ulli;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef long double ld;
typedef vector<int> vi;
typedef pair<ld, ld> pld;

void solve() {
   short a, b, c;
   cin >> a >> b >> c;
   cout << ((a == b+c) || (b == a+c) || (c == b+a) ? "YES\n" : "NO\n");
}

int main() {
   speed;
   short tc; cin >> tc;
   while (tc--) solve();
   return 0;
}