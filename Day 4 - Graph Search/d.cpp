#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
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

        for (int u = 0; u < n; ++u) {
            if (e[v][u] && dist[u] > dist[v] + 1) {
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
}


int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> e[i][j];
        }
    }

    bfs(0);

    for (int i = 0; i < n; ++i) {
        cout << dist[i] << " ";
    }
    cout << "\n";
}




