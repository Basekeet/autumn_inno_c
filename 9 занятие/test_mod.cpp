#include <bits/stdc++.h>

using namespace std;

int MOD = 100;
int dp[100000];

int main() {
    int n;
    cin >> n;
    dp[0] = 2;
    dp[1] = 3;

    for (int i = 2; i < n; i++) {
        dp[i] = (dp[i - 1] * dp[i - 2]) % MOD;
    }

    for (int i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
}