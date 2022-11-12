#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll w, h, n;

ll f(ll L) {
    if (L / w >= n && L / h >= 1 || L / h >= n && L / w >= 1) {
        return n * 2;
    }
    return (L / w) * (L / h);
}

int main() {
    cin >> w >> h >> n;

    ll l = -1;

    ll r = max(w, h) * n;

    while ((r - l) > 1) {
        ll L = (l + r) / 2;
        if (f(L) >= n) {
            r = L;
        } else {
            l = L;
        }
    }
    cout << r;
}