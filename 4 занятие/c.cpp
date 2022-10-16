#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = 1000000001;

    sort(a, a + n + 1);


    int MAX = 0;
    int last_index = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            if (MAX < i - last_index) {
                v.clear();
                v.push_back(a[i - 1]);
                MAX = i - last_index;
            } else if (MAX == i - last_index) {
                v.push_back(a[i - 1]);
            }
            last_index = i;
        }
    }

    for (auto el : v) {
        cout << el << " ";
    }

}