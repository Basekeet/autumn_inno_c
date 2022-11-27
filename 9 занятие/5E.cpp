#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;


    map<char, char> m = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };
    stack<char> q;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            q.push(s[i]);
        } else if (q.size() == 0 || m[s[i]] != q.top()) {
            cout << "NO";
            return 0;
        } else {
            q.pop();
        }
    }

    if (q.size() == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}