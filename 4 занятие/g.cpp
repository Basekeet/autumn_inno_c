#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int digits_sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
} 

bool cmp(int a, int b) {
    return digits_sum(a) > digits_sum(b);
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }    

    stable_sort(a, a + n, cmp);

    for (auto el : a) {
        cout << el << " ";
    }
}