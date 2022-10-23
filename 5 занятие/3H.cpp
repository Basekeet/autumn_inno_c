#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    pair<int, int> b[n];
    int c[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a, a + n);
    sort(b, b + n);
    reverse(b, b + n);

    for (int i = 0; i < n; i++) {
        c[a[i].second] = b[i].second;
    }

    for (auto el : c) {
        cout << (el + 1) << " ";
    }
}