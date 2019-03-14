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

    dfs(0);

    if (visited[n-1]) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

