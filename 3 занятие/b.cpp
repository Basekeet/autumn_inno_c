#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    if (a % 10 < b % 10) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }    

    stable_sort(v, v + n, cmp);

    for (auto el : v) {
        cout << el << " ";
    }
}