#include <bits/stdc++.h>

using namespace std;

int dp[40];
int a[40];

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i <= n; i++) {
        a[i] = 0;
        dp[i] = 0;
    }

    for (int i = 0; i < q; i++) {
        int tmp;
        cin >> tmp;
        a[tmp] = 1;
    }

    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0) {
            for (int j = max(1, j - k); j < i; j++) {
                dp[i] += dp[j];
            }
        }
    }

    cout << dp[n];

}