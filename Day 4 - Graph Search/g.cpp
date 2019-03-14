#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> e[i][j];
        }
    }

    int numEdges = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (e[i][j]) {
                ++numEdges;
            }
        }
    }
    numEdges /= 2;

    cout << numEdges << "\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (e[i][j]) {
                cout << i+1 << " " << j+1 << "\n";
            }
        }
    }
}

