#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second > b.second) {
        return true;
    }
    else if (a.second < b.second) {
        return false;
    }
    
    if (a.first < b.first) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<pair<int, int>> v;

    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto el : v) {
        cout << el.first << " " << el.second << "\n";
    }
}