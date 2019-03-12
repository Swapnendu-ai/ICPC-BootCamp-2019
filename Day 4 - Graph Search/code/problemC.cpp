#include <bits/stdc++.h>

using namespace std;

int size;
char graph[101][101];

void DFS(int root)
{
    cout << "DFS" << root <<endl;
    if(graph[root][size])
        {
                cout<< "Yes";
                exit(0);
            }
    for(int i = root + 1; i < size; i++)
        if(graph[root][i]){
            if(i != size)
                DFS(i);
        }
}


int main()
{
    cin >> size;
    int inp;
    for(int j =0; j< size; j++)
        {
            for(int i =0; i< size; i++)
                {
                    cin >> graph[j][i];
                }
        }
    size--;
    DFS(0);
    cout << "size" << size;
    cout << "No";
    return 0;
}
