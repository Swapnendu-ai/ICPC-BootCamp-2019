#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

// vector<int> DFS(int root, vector<int> cycle, int k) {
//     cout << "root: " << root << endl;
//     cycle.push_back(root);
//     if (k == 0) {
//         return cycle;
//     }
//     // cout << 12212 << endl;
//     for(int i = 0; i < size; i++) {
//         // cout << root <<  "i: " << i << endl;
//         // cout << "graph ";
//         // for (int x = 0; x < size; x++) {
//         //     for (int y = 0; y < size ; y++) {
//         //         cout << graph[x][y] << " ";
//         //     }
//         //     cout << endl;
//         // }
//         cout << "dsaf " << graph[root][i] << endl;
//         cout << "size" << sizeof(graph[root][i]) << endl;
//         if(graph[root][i] == 1) {
//             cout << 3222 << endl;
//             // cout << "size: " << cycle.size() << endl;
//             for (auto j = cycle.begin(); j < cycle.end(); j++) {
//                 // cout << "hsdf" << endl;
//                 if ((*j) == i) {
//                     // cout << "(*j) == i" << endl;
//                     return cycle;
//                 }
//             }
//             return DFS(i, cycle, k - 1);
//         }
//     }
// }
//

int main() {
    cin >> size;
    int count=1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> graph[i][j];
            if (graph[i][j]) count++;
        }
    }

    if(count/2 != size) {
        cout << "-1";
        return 0;
    }
    else{
    int i=0;
    int j =0;
    int flag = 1;
    for(; (i < size) & flag; i++) {
        for(j = i + 1; j < size; j++) {
            if (graph[i][j]){
                if (i == j+1) {
                    flag = 0;
                    break;}
            }
        }
    }

    cout << i - 1 << " " << j << " ";
    j--;
    int vis[size];
    for (int h = 0 ; h < size; h ++) vis[h] = 0;
    vis[j] = 1;
    vis[i] = 1;
    int count = 1 ;
    for (int k = 0 ; k < size; k ++)
    {
            // cout << graph[j][k]<<endl;
            if (graph[j][k] && ! vis[k] && count < size -2) {
                count ++;
                cout<<k+1<<" ";
                vis[k] = 1;
                j = k;
                k=0;}


    }
    cout << 1 ;
}
    return 0;
}
