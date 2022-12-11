#include <bits/stdc++.h>

using namespace std;

int g[100][100];

int main() {
    int n, m; 
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }

    cout << g[1][3] << "\n";
    cout << g[0][3] << "\n";

    for (int i = 0; i < n; i++) {
        if (g[0][i] == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
}