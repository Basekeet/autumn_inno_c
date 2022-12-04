#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> m;

    m[1011] = 3123;
    m[123] = 4;
    m[315] = 10;
    m[10123] = 2;

    for (auto el : m) {
        cout << el.first << " " << el.second << "\n";
    }

    cout << "Problem\n";
    map<int, int> m2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        m2[t]++;
    }

    cout << "RESULT\n";
    for (auto el : m2) {
        cout << el.first << " " << el.second << "\n";
    }

    auto a = m.lower_bound(315);

    cout << (*a).first << " " << (*a).second << "\n";
    a++;
    cout << (*a).first << " " << (*a).second << "\n";
}