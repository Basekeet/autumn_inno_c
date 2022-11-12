#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> v;

bool f(int x) {
    int last = v[0];
    int c = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] - last >= x) {
            c++;
            last = v[i];
        }
    }
    return c >= k;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int l = v[v.size() - 1] - v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] - v[i - 1] < l) {
            l = v[i] - v[i - 1];
        }
    }

    int r = v[v.size() - 1] - v[0] + 100;

    while ((r - l) > 1) {
        int mid = (r + l) / 2;
        if (f(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << l;
}