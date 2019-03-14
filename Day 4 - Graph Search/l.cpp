#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 105;

int n, m;
vector<int> e[maxn];
int dist[maxn];
queue<int> q;

void bfs(int start) {
    for (int i = 0; i < n; ++i) {
        if (i == start) dist[i] = 0;
        else dist[i] = maxn;
    }
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        // for (int u = 0; u < n; ++u) {
        for (int u : e[v]) {
            // if (e[v][u] && dist[u] > dist[v] + 1) {
            if (dist[u] > dist[v] + 1) {
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
}

void read() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
}

int main() {
    read();

    bfs(0);

    for (int i = 0; i < n; ++i) {
        cout << dist[i] << " ";
    }
    cout << "\n";
}

