#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    
    cout << "STACK:\n";
    stack<int> s;
    
    cout << s.empty() << "\n";

    s.push(2);
    s.push(3);
    s.push(10);

    cout << s.top() << "\n";

    s.pop();

    cout << s.top() << "\n";

    cout << s.empty() << "\n";

    cout << s.size() << "\n";


    cout << "QUEUE:\n";
    queue<char> q;

    cout << q.empty() << "\n";

    q.push('2');
    q.push('4');
    q.push('b');
    cout << q.front() << "\n";
    cout << q.back() << "\n";

    q.pop();

    cout << q.front() << "\n";
    cout << q.back() << "\n";

    cout << q.size() << "\n";
    cout << q.empty() << "\n";

    cout << "DEQUE:\n";
    deque<pair<int, int>> d;

    d.push_back({1, 2});
    d.push_back({2, 3});
    d.push_front({5, 2});
    d.push_front({0, 2});

    cout << "FIRST\n";
    for (auto el : d) {
        cout << "EL: " << el.first << " " << el.second << "\n";
    }

    cout << d.front().first << " " << d.front().second << " " << d.back().first << " " << d.back().second << "\n";

    d.pop_back();
    d.pop_front();

    cout << "SECOND\n";
    for (auto el : d) {
        cout << "EL: " << el.first << " " << el.second << "\n";
    }

    cout << d.front().first << " " << d.front().second << " " << d.back().first << " " << d.back().second << "\n";


}