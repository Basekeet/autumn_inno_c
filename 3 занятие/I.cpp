#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) 
            return false;
    return true;
}

int main() {
    ll n;
    cin >> n;

    if (n > 2 && n % 2 == 0) {
        for (int i = 1; i < n; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << i << " " << n - i;
                break;
            }
        }
    } else {
        if (isPrime(n - 2)) {
            cout << 2 << " " << n - 2;
        } else {
            cout << -1;
        }
    }

}