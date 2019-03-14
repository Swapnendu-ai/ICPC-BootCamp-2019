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

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < j; ++k) {
                if (e[i][j] && e[i][k] && e[j][k]) {
                    cout << i+1 << " " << j+1 << " " << k+1 << "\n";
                    return 0;
                }
            }
        }
    }

    cout << -1 << "\n";
}
