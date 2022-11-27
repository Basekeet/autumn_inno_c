#include <bits/stdc++.h>

using namespace std;

int dp[1010];
int r[1010];

int main() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;

    dp[0] = 0;
    r[0] = -1;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        r[i] = 1;

        if (i >= 5 && dp[i - 5] + 1 < dp[i]) {
            dp[i] = dp[i - 5] + 1;
            r[i] = 5;
        }

        if (i >= 6 && dp[i - 6] + 1 < dp[i]) {
            dp[i] = dp[i - 6] + 1;
            r[i] = 6;
        }
    }

    cout << dp[n] << "\n";

    vector<int> v;
    while (n != 0) {
        v.push_back(r[n]);
        n = n - r[n];
    }

    sort(v.begin(), v.end());
    for (auto el : v) {
        cout << el << " ";
    }


}