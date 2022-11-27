#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int A[1000][2];

int dp[1000][1000];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> A[i][0] >> A[i][1];
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - A[i][0] > 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - A[i][0]] + A[i][1]);
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
}