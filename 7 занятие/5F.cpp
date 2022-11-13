#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int a;
            cin >> a;
            if (s.size() == 0) s.push(a);
            else s.push(min(a, s.top()));
        } else if (t == 2) {
            s.pop();
        } else {
            cout << s.top() << "\n";
        }
    }
}