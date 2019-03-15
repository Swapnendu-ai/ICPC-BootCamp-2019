#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];
int visited[101];

void DFS(int root) {
    if (visited[root]) {
        return;
    }
    visited[root] = 1;
    for(int i = 0; i < size; i++) {
        // cout << "here" << root << " " << i - 1 << endl;
        if(graph[root][i]) {
            DFS(i);
        }
    }
}


int main() {
    cin >> size;
    int counter = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> graph[i][j];
        }
    }
    for(int i = 0; i < size; i++) {
        visited[i] = 0;
    }
    for(int i = 0; i < size; i++) {
        if (!visited[i]) {
            DFS(i);
            counter++;
        }
    }

    cout << counter;
    return 0;
}

