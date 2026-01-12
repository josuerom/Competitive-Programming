#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    string n[9] = {"one","two","three","four","five","six","seven","eight","nine"}; 
    if (a==1&&b==9) {
        for (int i = 0; i < 9; i++) cout << n[i] << endl;
    } else if (a<=9&&b<=9) {
        for (int i = a-1; i < b; i++) cout << n[i] << endl;
    } else if (a<=9&&b>9) {
        for (int i = a-1; i < 9; i++) cout << n[i] << endl;
        for (int i = 10; i <= b; i++) {
            if (i%2==0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
    } else if (a>=9&&b>=9) {
        for (int i = a; i <= b; i++) {
            if (i%2==0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
    }
    return 0;
}
