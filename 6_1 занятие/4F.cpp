#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll w, h, n;

ll f(ll L) {
    if ((L / w > n && L / h >= 1) || (L / h > n && L / w >= 1)) {
        return 1e18 + 1;
    }
    return (L / w) * (L / h);
}   

int main() {
    cin >> w >> h >> n;

    ll l = -1;
    ll r = 1e18 + 1;

    while (r - l > 1) {
        ll mid = (r + l) / 2;

        if (f(mid) >= n) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r;

}