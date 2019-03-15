// CMU Qatar: Sparta
#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

void BFS(int current)
{
    int distances[size];
    for (int i = 0; i < size; i++){
                distances[i] = -1;
        }

    distances[current] = 0;
    vector<int> box;
    box.push_back(current);
    int i = 0;
    while(i <box.size()){
        int v = box[i];
        // box.erase(box.begin());
        for (int u = v; u < size; u++){
            if(graph[v][u]){
                if (distances[u] == -1)
                {
                    box.push_back(u);
                    distances[u] = distances[v] + 1;
                }
            }
        }
        i++;
    }
    // cout<<distances[size-1]<< " ";
    for (int i = 0; i < size; i++) {
        cout << distances[i] << " ";
    }
}


int main()
{
    cin >> size;
    for(int j =0; j< size; j++)
        {
            for(int i =0; i< size; i++)
                {
                    cin >> graph[j][i];
                }
        }

    BFS(0);

    return 0;
}

