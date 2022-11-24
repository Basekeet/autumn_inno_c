#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll k, n;
ll A[2][6];
ll B[2][6] = {{2, 2, 2, 1, 1, 8},
              {2, 2, 2, 1, 1, 8}};

ll f(ll c) {
    ll res = c * n;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            res = res - max(B[i][j] * c - A[i][j], 0ll) * k;
        }
    } 
    return res;
}

int main() {
    cin >> k >> n;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> A[i][j];
        }
    }

    ll l = - 1;
    ll r = 1e9 + 10;

    while (r - l > 1) {
        ll mid = (r + l) / 2;
        if (f(mid + 1) - f(mid) >= 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << f(r) << "\n";
}