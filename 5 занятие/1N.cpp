#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;

    while (true) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) {
            break;
        }
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cout << *(v.end() - 2);
}