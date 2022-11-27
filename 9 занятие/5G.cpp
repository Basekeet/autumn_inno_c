#include <bits/stdc++.h>

using namespace std;

int a[100010];

int main() {
    int n;
    cin >> n;

    deque<int> d;

    int p = 0;
    int u = 0;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        if (q == 1) {
            int t;
            cin >> t;
            a[t] = p;
            p++;
            d.push_back(t);
        } else if (q == 2) {
            d.pop_front();
            u++;
        } else if (q == 3) {
            p--; 
            d.pop_back();
        } else if (q == 4) {
            int t;
            cin >> t;
            cout << a[t] - u<< "\n";
        } else {
            cout << d.front() << "\n";
        }
    }
}