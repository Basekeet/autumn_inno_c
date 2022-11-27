#include <bits/stdc++.h>

using namespace std;

int N[120];
int dp[120];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> N[i];
    }

    sort(N + 1, N + n + 1);

    dp[1] = 1e8;
    dp[2] = N[2] - N[1];
    for (int i = 3; i <= n; i++) {
        dp[i] = min(dp[i - 1] + N[i] - N[i - 1], dp[i - 2] + N[i] - N[i - 1]);
    }

    while (true) {};

    cout << dp[n];
}