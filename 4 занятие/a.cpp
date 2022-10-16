#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[100005];

bool contains(int c, int n) {
    int l = 0;
    int r = n;
    while (r - l > 1) {
        int mid = (r + l) / 2;
        if (a[mid] == c) {
            return true;
        } else if (a[mid] < c) {
            l = mid;
        } else {
            r = mid;
        }
    }
    if (a[l] == c || a[r] == c) {
        return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int b[k];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }    

    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }    

    for (int i = 0; i < k; i++) {
        if (contains(b[i], n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}