#include <bits/stdc++.h>

using namespace std;

int dp[10020];
int a[10020];
int r[10020];

int main() {
    int n, k;
    cin >> n >> k;

    a[1] = 0;
    a[n] = 0;
    for (int i = 2; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
    }

    for (int i = 2; i <= n; i++) {
        int MAX = dp[i-1] + a[i];
        r[i] = i - 1;
        for (int j = max(1, i - k); j < i; j++) {
            if (MAX < dp[j] + a[i]) {
                MAX = dp[j] + a[i];
                r[i] = j;
            }
        }
        dp[i] = MAX;
    }

    vector<int> ans;
    int cur = n;
    r[1] = -1;
    while (cur != 1) {
        ans.push_back(cur);
        cur = r[cur];
    }
    ans.push_back(1);
    reverse(ans.begin(), ans.end());
    cout << dp[n] << "\n";

    cout << ans.size() - 1 << "\n";
    for (auto el : ans) {
        cout << el << " ";
    }

}