#include <bits/stdc++.h>

using namespace std;

vector<int> g[100];
bool vis[100];

void dfs(int v) {
    cout << v << "\n";
    vis[v] = true;
    for (auto e : g[v]) {
        if (!vis[e]) {
            dfs(e);
        }
    }
}

int main() {
    int n;
    cin >> n;

    memset(vis, false, sizeof(bool) * 100);

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        for (int j = 0; j < t; j++) {
            int q;
            cin >> q;
            g[i].push_back(q);
        }
    }

    // dfs(1)

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            count++;
        }
    }
    cout << count << "\n";
}