#include <bits/stdc++.h>


using namespace std;
long long  k, n;
long long  b[2][6] = {
    {2,2,2,1,1,8},
    {2,2,2,1,1,8}
};

long long  a[2][6];

long long  f(long long  x) {
    long long  c = x / n + (x % n > 0 ? 1 : 0);

    long long  sum = 0;

    for (long long  i = 0; i < 2; i++) {
        for (long long  j = 0; j < 6; j++) {
            sum += (b[i][j] * c - a[i][j]) < 0 ? 0 : (b[i][j] * c - a[i][j]) * k;
        }
    }
    return x - sum;
}

int  main() {
    cin >> k >> n;

    for (long long  i = 0; i < 2; i++) {
        for (long long  j = 0; j < 6; j++) {
            cin >> a[i][j];
        }
    }

    long long  l = 0;
    long long  r = 1e9 + 20;

    while (r - l > 1) {
        long long  mid = (r + l) / 2;
        if (f(mid + 1) - f(mid) >= 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << r << " " << f(r) << "\n";
    cout << f(40);
}