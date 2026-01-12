/**
 *   author:  josuerom
 *   created: 18/02/23 00:16:03
**/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(a) a.begin(), a.end()

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   int n, ans;
   cin >> n;
   vector<string> polyhedrons(n);
   for (int i = 0; i < n; i++) {
      cin >> polyhedrons[i];
   }
   sort(all(polyhedrons));
   int tetrahedon = 4 * count(all(polyhedrons), "Tetrahedron");
   int cube = 6 * count(all(polyhedrons), "Cube");
   int octahedron = 8 * count(all(polyhedrons), "Octahedron");
   int dodecahedron = 12 * count(all(polyhedrons), "Dodecahedron");
   int icosahedron = 20 * count(all(polyhedrons), "Icosahedron");
   ans = tetrahedon+cube+octahedron+dodecahedron+icosahedron;
   cout << ans << '\n';
   return 0;
}