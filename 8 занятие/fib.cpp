#include <bits/stdc++.h>

using namespace std;

int dp[100000];

int main() {
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i] + dp[i - 1];
    }

    cout << dp[n];
}