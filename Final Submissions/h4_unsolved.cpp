#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];
vector < vector <int> > ans;


void DFS(int *visited, int root,vector <int> ancestor)
{
    // cout << "root" << root <<endl;
    ancestor.push_back(root);
    if(root == size-1){
        ans.push_back(ancestor);
        return;
    }
    for(int i = 0; i<size; i++)
    {
        if(graph[root][i] && !visited[i])
        {
            vector <int> tmp = ancestor;
            int v_tmp[101];
            for(int j =0; j<size; j++)
                v_tmp[j] = visited[i];
            v_tmp[root] = 1;
            DFS(v_tmp,i,ancestor);
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
    vector<int> ancestor;
    int visited[101];
    for (int i = 0; i < 101; i++) {
        visited[i] = 0;
    }
    DFS(visited,0, ancestor);
    if(!ans.size())
    {
        cout << -1;
    }
    else
    {
        vector <int> minv = (*ans.begin());
        int size = minv.size();
        for(auto i = ans.begin()+1; i<ans.end();i++)
            if((*i).size()<size)
            {
                size = (*i).size();
                minv = (*i);
            }
        cout << size << endl;
        for(auto i = minv.begin(); i<minv.end();i++)
            cout << (*i) + 1<<" ";
    }
    return 0;
}

