#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;

    s.insert(2);
    s.insert(1);
    s.insert(-3);
    s.insert(10);

    s.erase(2);
    s.erase(2);

    s.insert(1012);
    s.insert(432);
    s.insert(-100);
    s.insert(-3);

    cout << s.size() << "\n";

    for (auto el : s) {
        cout << el << " ";
    }
    cout << "\n";

    auto a = s.lower_bound(1012);
    a--;
    cout << *a << "\n";

    auto b = s.lower_bound(1000);
    cout << *b << "\n";

    a = s.lower_bound(10);
    auto c = s.upper_bound(10);
    cout << *a << " " << *c << "\n";

    s.erase(*a);
    for (auto el : s) {
        cout << el << " ";
    }
    cout << "\n";

    auto d = s.find(1);
    cout << *d << "\n";

    auto e = s.find(2);
    cout << (s.find(2) == s.end()) << "\n";
    cout << *e << "\n";
}