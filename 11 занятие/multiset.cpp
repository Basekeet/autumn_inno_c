#include <bits/stdc++.h>

using namespace std;

int main() {
    multiset<int> s;

    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(7);
    s.insert(2);
    s.insert(4);
    s.insert(10);
    s.insert(3);
    s.insert(3);

    for (auto el : s) {
        cout << el << " ";
    }
    cout << "\n";
    
    cout << s.count(3) << "\n";

    s.erase(s.lower_bound(3));

    cout << s.count(3) << "\n";

    auto a = s.lower_bound(3);
    cout << *a << "\n";
    a--;
    cout << *a << "\n";    
    a++;
    a++;
    cout << *a << "\n";

    auto b = s.upper_bound(3);
    cout << *b << "\n";
    b--;
    cout << *b << "\n";

    auto c = s.find(7);
    cout << *c << "\n";

    c = s.find(8);
    cout << *c << "\n";
    cout << (c == s.end()) << "\n";

}