#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    ll t1 = v[v.size() - 1] * v[v.size() - 2] * v[v.size() - 3];
    ll t2 = v[v.size() - 1] * v[0] * v[1];

    if (t1 > t2) {
        cout << v[v.size() - 3] << " " << v[v.size() - 2] << " " << v[v.size() - 1];
    } else {
        cout << v[0] << " " << v[1] << " " << v[v.size() - 1];
    }
}