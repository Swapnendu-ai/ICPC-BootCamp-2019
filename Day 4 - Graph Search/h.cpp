#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
int dist[maxn];
int prv[maxn];
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
                prv[u] = v;
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

    if (dist[n-1] == maxn) {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> result;
    int cur = n-1;
    while (cur != 0) {
        result.push_back(cur);
        cur = prv[cur];
    }
    result.push_back(0);
    reverse(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int x : result) {
        cout << x+1 << " ";
    }
    cout << "\n";
}





