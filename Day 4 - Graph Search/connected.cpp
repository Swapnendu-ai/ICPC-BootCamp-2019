#include <bits/stdc++.h>

using namespace std;

#define type1 int



bool *visited;

vector <type1 > getChildren (type1 **graph, type1 itr, bool visited, long long size)
{
    vector <type1> child;
    for (int i = 0; i < size; ++i)
    {
        if(graph[itr][i] && !visited[i])
        {
            child.push_back(i);
        }
    }
    return child;
}

void DFS(long root, long long graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(i+1,children_temp.begin(),children_temp.end());
    return -1
}

int main()
{
    long size;
    cin >> size;
    long long a[size][size];
    for(int i = 0; i< size; i++)
        for(int j = 0; j< size; j++)
            cin>> a[i][j];
    DFS(0,a);

    return 0;
}
