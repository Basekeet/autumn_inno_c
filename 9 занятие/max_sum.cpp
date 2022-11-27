#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int dp[1000];
    int dp_r[1000];

    dp_r[0] = 0;
    dp[0] = 0;
    int p = 0;
    int MIN = 0;
    int l = -1;

    for (int i = 1; i <= n; i++) {
        p += a[i];

        dp[i] = p - MIN;
        dp_r[i] = l;

        if (p < MIN) {
            l = i;
            MIN = p;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dp[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; i++) {
        cout << dp_r[i] << " ";
    }
    
}