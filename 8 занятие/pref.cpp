#include <bits/stdc++.h>

using namespace std;

int dp[100000];
int a[100000];

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i] + dp[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << "\n";
    }
}