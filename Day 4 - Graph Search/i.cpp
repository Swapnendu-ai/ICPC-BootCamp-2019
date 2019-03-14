#include <iostream>
#include <vector>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
bool visited[maxn];
int prv[maxn];

void dfs(int v, int parent) {
    visited[v] = true;
    for (int u = 0; u < n; ++u) {
        if (e[v][u] && u != parent) {
            if (!visited[u]) {
                prv[u] = v;
                dfs(u, v);
            } else {
                vector<int> cycle;
                int cur = v;
                while (cur != u) {
                    cycle.push_back(cur);
                    cur = prv[cur];
                }
                cycle.push_back(u);

                cout << cycle.size() << "\n";
                for (int x : cycle) {
                    cout << x+1 << " ";
                }
                cout << "\n";
                exit(0);
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

    for (int v = 0; v < n; ++v) {
        if (!visited[v]) {
            dfs(v, -1);
        }
    }

    cout << -1 << endl;
}



