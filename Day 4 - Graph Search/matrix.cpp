#include <bits/stdc++.h>

using namespace std;

#define type1 int
#define type2 int

type1 **graph;

bool *visited;

vector <type1 > getChildren (type1 root, bool *visited, long long size)
{
    vector <type1> child;
    for (int i = 0; i < size; ++i)
    {
        if(graph[root][i] && !visited[i])
        {
            child.push_back(i);
        }
    }
    return child;
}
