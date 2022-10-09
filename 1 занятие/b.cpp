#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    if (s >= 2) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
}