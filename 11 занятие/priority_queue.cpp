#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    cout << pq.empty() << "\n";

    pq.push(4);
    pq.push(-100);
    pq.push(3);
    pq.push(-1);
    pq.push(0);
    pq.push(10);
    pq.push(2);


    cout << pq.top() << "\n";

    pq.pop();

    cout << pq.top() << "\n";
}