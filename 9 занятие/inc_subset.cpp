#include <bits/stdc++.h>

using namespace std;

int a[1000];
int dp[1000];
int r[1000];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        int MAX = 0;
        int ind = -1;

        for (int j = 1; j < i; j++) {
            if (a[j] < a[i] && dp[j] > MAX) {
                ind = j;
                MAX = dp[j];
            }
        }

        dp[i] = MAX + 1;
        r[i] = ind;
    }

    for (int i = 1; i <= n; i++) {
        cout << dp[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; i++) {
        cout << r[i] << " ";
    }
    cout << "\n";
}