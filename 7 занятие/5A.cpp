#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        if (q == 1) {
            int t;
            cin >> t;
            s.push(t);
        } else {
            cout << s.top() << "\n";
            s.pop();
        }
    }
}