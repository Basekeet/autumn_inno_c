#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    ll n;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> a1;
    vector<ll> a2;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a1.push_back(a[i]);
        } else {
            a2.push_back(a[i]);
        }
    }

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    reverse(a2.begin(), a2.end());
    for (int i = 0; i < a1.size(); i++) {
        a[i * 2] = a1[i];
    }

    for (int i = 0; i < a2.size(); i++) {
        a[i * 2 + 1] = a2[i];
    }


    for (auto el : a) {
        cout << el << " ";
    }
}