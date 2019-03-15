//Sparta
#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

void DFS(int root) {
    if (graph[root][size] != 0) {
        cout << "Yes";
        exit(0);
    }
    for(int i = root + 1; i < size; i++) {
        // cout << "here" << root << " " << i - 1 << endl;
        if(graph[root][i]) {
            DFS(i);
        }
    }
}


int main() {
    cin >> size;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> graph[i][j];
        }
    }
    size--;
    DFS(0);

    cout << "No";
    return 0;
}

