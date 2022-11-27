#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    memset(a, -1, n * sizeof(int));
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        while (!s.empty() && s.top().first > t) {
            a[s.top().second] = i;
            s.pop();
        }
        s.push({t, i});
    }

    for (auto el : a) {
        cout << el << " ";
    }
    
}