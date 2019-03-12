#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];
vector < int > minvec;
int minSize = 105;

void BFS(int root, vector<int> ancestor, int *visited)
{
    vector <int> children;
    // if (visited[root]) {
    //     return;
    // }
    cout << "root: " << root << "size: " << ancestor.size() << endl;
    for (int i = 0; i < 101; i++) {
        visited[i] = 0;
    }
    visited[root] = 1;
    for (auto i = ancestor.begin(); i < ancestor.end(); i++) {
        visited[(*i)] = 1;
    }
    for (int i = 0; i < size; i++) {
        if (graph[root][i] && !visited[i]) {
            children.push_back(i);
        }
    }
    // cout << "root: " << root << endl;
    // for(auto i = children.begin(); i<children.end();++i) {
    //     cout << (*i) << " ";
    // }
    // cout << endl;
    for(auto i = children.begin(); i<children.end();++i) {
        if ((*i) == size - 1) {
            cout << "minsize" << minSize << endl;
            for (auto i = minvec.begin(); i < minvec.end(); i++) {
                cout << (*i) << " ";
            }
            if (minSize > ancestor.size()) {
                minvec = ancestor;
                minSize = ancestor.size();
                return;
            }
        }
    }
    for(auto i = children.begin(); i<children.end();++i) {
        vector<int> tmp = ancestor;
        tmp.push_back((*i));
        BFS((*i), tmp, visited);
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
    vector<int> ancestor;
    int visited[101];
    for (int i = 0; i < 101; i++) {
        visited[i] = 0;
    }
    visited[0] = 1;
    ancestor.push_back(0);
    BFS(0, ancestor, visited);

    // if (minvec.size() == 0) {
    //     cout << -1 << endl;
    // } else {
    //     cout << minvec.size() << endl;
    //     for (auto i = minvec.begin(); i < minvec.end(); i++) {
    //         cout << (*i) + 1 << " ";
    //     }
    // }

    return 0;
}
