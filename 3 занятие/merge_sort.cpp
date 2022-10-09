#include <bits/stdc++.h>

using namespace std;

vector<int> Msort(vector<int> v) {
    if (v.size() <= 1) {
        return v;
    } 

    vector<int> t1;
    vector<int> t2;

    for (int i = 0; i < v.size() / 2; i++) {
        t1.push_back(v[i]);
    }
    for (int i = v.size() / 2; i < v.size(); i++) {
        t2.push_back(v[i]);
    }

    t1 = Msort(t1);
    t2 = Msort(t2);

    int i1, i2;

    vector<int> res;

    i1 = 0;
    i2 = 0;
    while (i1 < t1.size() && i2 < t2.size()) {
        if (t1[i1] < t2[i2]) {
            res.push_back(t1[i1]);
            i1++; 
        } else {
            res.push_back(t2[i2]);
            i2++; 
        }
    }

    while (i1 < t1.size()) {
        res.push_back(t1[i1]);
        i1++; 
    }
    while (i2 < t2.size()) {
        res.push_back(t2[i2]);
        i2++; 
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    v = Msort(v);

    for (auto el : v) {
        cout << el << " ";
    }

}