#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

void DFS(int root, int *grey, int *black, ...) {
    for (int i = root + 1; i < size; i++) {
        
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
    for (int i = 0; i < size; i++) {
        int grey[size], black[size];
        for (int j = 0; j < size; j++) {
            black[j] = 0;
            grey[j] = 0;
            grey[i] = 1;
            DFS(i, grey, black, ...)
        }
    }

    return 0;
}
