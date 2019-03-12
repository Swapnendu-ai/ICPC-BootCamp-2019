#include <bits/stdc++.h>

using namespace std;

#define type1 int
#define type2 int

bool cmp (long long a, long long b)
{
    return a<b;
}

vector < pair <type1,type2> > goal;

type2 DFS(auto root, type2 graph)
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

type2 BFS(auto root, type2 graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(children.end(),children_temp.begin(),children_temp.end());
    return -1
}
