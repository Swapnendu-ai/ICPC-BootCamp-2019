#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

vector <int> minv;
int min_size = 105;
vector <int> ancestor;
int vis[105];
int flag = 0;

void DFS(int root)
{
    // cout << "root" << root <<endl;
    ancestor.push_back(root);
    if(root == size-1){
        if(ancestor.size() <min_size)
        {
            minv = ancestor;
            min_size = minv.size();
            flag = 1;
        }
        ancestor.pop_back();
        return;
    }
    vis[root] = 1;
    int count = 0;
    for(int i = 0; i<size; i++)
    {
        if(graph[root][i])
        {
        //     int visited = 1;
        // for(auto j = ancestor.begin(); j < ancestor.end();j++)
            // if((*j) == i){
            //     visited = 0;
            //     break;
            // }
            if(!vis[i]){
                DFS(i);
                count++;
            }

        }
    }
    if(count < 2)
        vis[root] = 0;
    ancestor.pop_back();
}

int main() {
    cin >> size;
    int counter = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> graph[i][j];
        }
    }
    for(int i =0; i<size;i++)
        vis[i] = 0;
    DFS(0);
    if(!minv.size())
    {
        cout << -1;
    }
    else
    {
        cout <<minv.size()<<endl;
        for(auto i = minv.begin(); i<minv.end();i++)
            cout << (*i) + 1<<" ";
    }
    return 0;
}
