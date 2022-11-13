#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int g1[n + 1];
    int g2[n + 1];
    memset(g1, 0, sizeof(int) * (n + 1));
    memset(g2, 0, sizeof(int) * (n + 1));
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;

        g1[a] = b;
        g2[b] = a;
    }


    int p;
    for (int i = 1; i <= n; i++) {
        if (g2[i] == 0) {
            p = i;
            break;
        }
    }

    while (p != 0) {
        cout << p << " ";
        p = g1[p];
    }

}