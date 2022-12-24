#include <bits/stdc++.h>

using namespace std;

int n, x;
vector<int> g[1001];
int dist[1001];

void bfs(int x) {
    memset(dist, -1, 1000 * sizeof(int));
    queue<int> q;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()) {
        int t = q.front();
        q.pop();

        for (auto el : g[t]) {
            if (dist[el] == -1) {
                dist[el] = dist[t] + 1;
                q.push(el);
            }
        }
    }
}

int main() {
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t;
            cin >> t;
            if (t == 1) {
                g[i].push_back(j);
            }
        }
    }

    bfs(x);

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
    cout  << '\n';
}
