#include <iostream>
using namespace std;

const int maxn = 105;

int n;
int e[maxn][maxn];
int degree[maxn];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> e[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (e[i][j]) {
                ++degree[i];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << degree[i] << " ";
    }
    cout << "\n";

}
