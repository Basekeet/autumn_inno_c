#include <bits/stdc++.h>

using namespace std;

int a[200010];
int p[200010];

int main() {
    int n, x;
    cin >> n >> x;

    a[0] = 0;
    p[0] = 0;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        a[i] = t >= x ? 1 : 0;
        p[i] = p[i - 1] + a[i];
    }

    int q;
    cin >> q;

    int l = 0;
    n++;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;

        if (t == 1) {
            cin >> t;
            a[n] = t >= x ? 1 : 0;
            p[n] = p[n - 1] + a[n];
            n++;
        } else if (t == 2) {
            l++;
        } else {
            int r;
            cin >> r;
            r = r + l + 1;
            int res = p[r] - p[l] - a[r];
            cout << res << "\n";
        }
    }
}