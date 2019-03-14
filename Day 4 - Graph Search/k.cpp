#include <iostream>
#include <vector>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
bool visited[maxn];
int prv[maxn];

void dfs(int v) {
    visited[v] = true;
    for (int u = 0; u < n; ++u) {
        if (e[v][u] && !visited[u]) {
            prv[u] = v;
            dfs(u);
        }
    }
}

void no() {
    cout << -1 << "\n";
    exit(0);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> e[i][j];
        }
    }

    if (n == 1) {
        cout << 1 << "\n";
        exit(0);
    }

    vector<int> deg1;
    int numEdges = 0;
    for (int i = 0; i < n; ++i) {
        int deg = 0;
        for (int j = 0; j < n; ++j) {
            if (e[i][j]) {
                ++deg;
                ++numEdges;
            }
        }
        if (deg == 1) {
            deg1.push_back(i);
        } else if (deg != 2) {
            no();
        }
    }
    numEdges /= 2;
    if (numEdges != n-1) {
        no();
    }

    if (deg1.size() != 2) {
        no();
    }

    dfs(deg1[0]);
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            no();
        }
    }

    vector<int> res;
    int cur = deg1[1];
    while (cur != deg1[0]) {
        res.push_back(cur);
        cur = prv[cur];
    }
    res.push_back(deg1[0]);

    for (int x : res) {
        cout << x+1 << " ";
    }
    cout << endl;
}
