#include <bits/stdc++.h>

using namespace std;


#define type1 int
#define type2 int

vector < vector <type1> > graph;

bool *visited;

//to determine cycles, keep track of the parent

vector <type1 > getChildren (vector <type1> node, vector <type1> visited)
{
    vector <type1> child;
    for (auto i = node.begin(); i < node.end(); ++i)
    {

            if(flag && !visited[(*i)])
                child.push_back(i);
    }
    return child;
}
