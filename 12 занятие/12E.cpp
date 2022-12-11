#include <bits/stdc++.h>

using namespace std;

vector<int> g[1010];
bool vis[1010];

void dfs(int v) {
    vis[v] = true;
    for (auto el : g[v])
        if (!vis[el])
            dfs(el);
}

int main() {
    int n, m;

    cin >> n >> m;


    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int counter = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            counter++;
        }
    }
    cout << counter;
}