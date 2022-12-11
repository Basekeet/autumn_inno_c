#include <bits/stdc++.h>

using namespace std;

vector<int> g[100];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        for (int j = 0; j < t; j++) {
            int q;
            cin >> q;
            g[i].push_back(q);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }
}