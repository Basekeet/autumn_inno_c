#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> g[1000];
int dist[1000];

void bfs(int x) {
    memset(dist, -1, 1000 * sizeof(int));
    queue<int> q;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()) {
        int t = q.front();
        cout << t << " " << dist[t] << "\n";
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
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    bfs(1);

}
