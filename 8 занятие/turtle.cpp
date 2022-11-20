#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];
int a[1000][1000];

int main() {
    memset(dp, -10000, sizeof(int) * 1000 * 1000);
    memset(a, -10000, sizeof(int) * 1000 * 1000);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    dp[1][1] = a[1][1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1) continue;

            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }

    cout << dp[n][m];
}