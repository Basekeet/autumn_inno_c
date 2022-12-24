#include <bits/stdc++.h>

using namespace std;

vector<int> g[100001];
bool visited[100001];
vector<int> q;
int n, m;

bool FAIL = false;

set<int> s;

void dfs(int v) {
    visited[v] = true;
    s.insert(v);
    for (auto el : g[v]) {
        if (!visited[el]) {
            dfs(el);
        } else if (s.find(el) != s.end()) {
            FAIL = true;
        }
    }
    s.erase(v);
    q.push_back(v);
}

void top_sort() {
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    if (FAIL) {
        cout << "-1\n";
        q.clear();
    }
    reverse(q.begin(), q.end());
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    top_sort();

    for (auto el : q) {
        cout << el << " ";
    }
    cout << "\n";
}