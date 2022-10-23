#include <bits/stdc++.h>

using namespace std;

string iter(string s) {
    if (s.size() == 0) {
        return s;
    }

    string res = "";
    string tmp;
    tmp += s[0];

    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            if (tmp.size() < 3) {
                res += tmp;
            }
            tmp.clear();
        }
        tmp += s[i];
    }

    if (tmp.size() < 3) {
        res += tmp;
    }

    return res;
}

int main() {
    string s;
    int n;
    cin >> n;
    getline(cin, s);

    string curr;

    // for (int i = 0; i < s.size(); i++) {
    //     char el = s[i];
    // }

    for (auto el : s) {
        if (el != ' ') {
            curr += el;
        }
    }

    int ans = 0;

    while (true) {
        string new_curr = iter(curr);
        if (curr.size() - new_curr.size() == 0) {
            break;
        }

        ans += curr.size() - new_curr.size();

        curr = new_curr;
    }

    cout << ans;
}
