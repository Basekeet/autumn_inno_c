#include <bits/stdc++.h>

using namespace std;

int main() {

    int in, sum;
    cin >> in;
    sum = 0;

    while (in != 0) {
        sum += in;
        cin >> in;
    }

    cout << sum;
}