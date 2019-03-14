#include <iostream>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
bool visited[maxn];

void dfs(int v) {
    visited[v] = true;
    for (int u = 0; u < n; ++u) {
        if (e[v][u] && !visited[u]) {
            dfs(u);
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

    int result = 0;
    for (int v = 0; v < n; ++v) {
        if (!visited[v]) {
            ++result;
            dfs(v);
        }
    }

    cout << result << "\n";
}


