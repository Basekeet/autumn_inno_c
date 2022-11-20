#include <bits/stdc++.h>

using namespace std;

unsigned long long dp[110];

int main() {
    unsigned long long n;
    cin >> n;
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n];
}