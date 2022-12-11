#include <bits/stdc++.h>

using namespace std;

int g[110][110];

int main() {
    int n;
    cin >> n;

    memset(g, 0, sizeof(int) * 110 * 110);
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        for (int j = 0; j < t; j++) {
            int q;
            cin >> q;
            g[i][q] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }

}