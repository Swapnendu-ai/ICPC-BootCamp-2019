#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
int visited[maxn];
int prv[maxn];
vector<int> topsort;

void restoreCycle(int u, int v) {
    vector<int> cycle;
    while (v != u) {
        cycle.push_back(v);
        v = prv[v];
    }
    cycle.push_back(u);
    reverse(cycle.begin(), cycle.end());
    cout << "cycle\n";
    cout << cycle.size() << "\n";
    for (int x : cycle) {
        cout << x+1 << " ";
    }
    cout << "\n";
}

void dfs(int v) {
    visited[v] = 1; // gray

    for (int u = 0; u < n; ++u) {
        if (e[v][u]) {
            if (visited[u] == 0) {
                prv[u] = v;
                dfs(u);
            } else if (visited[u] == 1) {
                restoreCycle(u, v);
                exit(0);
            }
        }
    }

    topsort.push_back(v);
    visited[v] = 2; // black
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> e[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (visited[i] == 0) {
            dfs(i);
        }
    }

    reverse(topsort.begin(), topsort.end());
    cout << "topsort\n";
    for (int x : topsort) {
        cout << x+1 << " ";
    }
    cout << endl;

}

