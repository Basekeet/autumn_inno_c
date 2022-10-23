#include <bits/stdc++.h>

using namespace std;

typedef long double ld;

ld v1, v2, a;

ld dist(ld x) {
    return sqrt((1.0 - a) * (1.0 - a) + x * x) / v1 +
           sqrt((1.0 - x) * (1.0 - x) + a * a) / v2;
}


int main() {
    cin >> v1 >> v2 >> a;

    ld curr = 0;
    ld step = 1.0;

    ld DX = 0.00000001;

    while (step > DX) {
        ld t1 = dist(curr + step);
        ld t2 = dist(curr + step + DX);
        if (t2 < t1) {
            curr += step; 
        } else {
            step /= 2;
        }
    }

    cout << curr;
}