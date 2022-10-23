#include <bits/stdc++.h>

using namespace std;

int f(int x) {
    return x * x;
}

int main() {
    int n;
    cin >> n;

    int curr = 0;
    int base = 1000;

    while (base > 0) {
        if (f(curr + base) <= n) {
            curr += base;
        } else {
            base /= 2;
        }
    }

    cout << curr + 1;

}