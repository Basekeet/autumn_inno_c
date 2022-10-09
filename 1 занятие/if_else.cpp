#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << "a equals b\n";
    } else if (b == c) {
        cout << "b equals c\n";
    } else if (a == c) {
        cout << "a equals c\n";
    } else {
        cout << "EXCEPTION\n";
    }
}