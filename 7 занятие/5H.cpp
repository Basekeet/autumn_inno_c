#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> q1;
    deque<int> q2;

    for (int i = 0; i < n; i++) {
        char q;
        cin >> q;
        if (q == '+') {
            int tmp;
            cin >> tmp;
            if (q1.empty()) {
                q1.push_back(tmp);
            } else if (q1.size() == q2.size()) {
                q2.push_back(tmp);
                q1.push_back(q2.front());
                q2.pop_front();
            } else {
                q2.push_back(tmp);
            }
        } else if (q == '*') {
            int tmp;
            cin >> tmp;
            if (q1.empty()) {
                q1.push_back(tmp);
            } else if (q1.size() == q2.size()) {
                q1.push_back(tmp);
            } else {
                q2.push_front(tmp);
            }
        } else {
            cout << q1.front() << "\n";
            q1.pop_front();
            if (q1.size() < q2.size()) {
                q1.push_back(q2.front());
                q2.pop_front();
            }
        }
    }
}