#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k;

ll A[10005];

bool f(ll L) {
    ll last = A[0];
    ll count = 1;
    for (int i = 1; i < n; i++) {
        if ((A[i] - last) >= L) {
            last = A[i];
            count++;
        }
    }
    return count >= k;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    ll l = -1;
    ll r = A[n - 1] - A[0] + 1;

    while (r - l > 1) {
        ll mid = (r + l) / 2;
        if (f(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << l;

}