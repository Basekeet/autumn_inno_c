#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, bool> m;
    for (int i = 0; i < n; i++) {
        char t;
        int q;
        cin >> t >> q;
        if (t == '+') {
            m[q] = true;
        } else if (t == '-') {
            m[q] = false;
        } else {
            cout << m[q] << "\n";
        }
    }
}