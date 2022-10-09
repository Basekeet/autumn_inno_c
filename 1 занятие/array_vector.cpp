#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[6];
    a[0] = 12;
    a[2] = 5;
    a[1] = 15;
    cout << a[2] << "\n";
    a[3] = 123;
    a[4] = 512;
    a[5] = 88;
    sort(a + 3, a + 6);

    for (int i = 0; i < 6; i++) {
        cout << a[i] << "\n";
    }

    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (auto el : v) {
        cout << el << "\n";
    }
    sort(v.begin(), v.end());
}