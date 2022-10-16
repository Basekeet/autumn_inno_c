#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[100005];

bool f1(int i, int c) {
    return a[i] < c;
}

bool f2(int i, int c) {
    return a[i] <= c;
}

int lower_bound(int c, int n) {
    int l = -1;
    int r = n;
    while (r - l > 1) {
        int mid = (r + l) / 2;
        if (f1(mid, c)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;
}

int upper_bound(int c, int n) {
    int l = -1;
    int r = n;
    while (r - l > 1) {
        int mid = (r + l) / 2;
        if (f2(mid, c)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }    
    sort(a, a + n);
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(r, n) - lower_bound(l, n) << " ";
    }
}  