#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, x, y;

bool f(int t, int n) {
    return t / x + t / y + 1 >= n;
}


int binsearch(int c, int n) {
    int l = -1;
    int r = n;
    while (r - l > 1) {
        int mid = (r + l) / 2;
        if (f(mid, c)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}


int main() {
    cin >> n >> x >> y;

    if (n == 1) {
        cout << min(x, y);
    } else {
        cout << binsearch(n, n * max(x, y)) + min(x, y);
    }

}  