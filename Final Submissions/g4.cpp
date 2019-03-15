#include <bits/stdc++.h>

using namespace std;

int size;
int graph[101][101];

int main() {
    cin >> size;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> graph[i][j];
        }
    }
    vector<pair<int, int> > vect;

    for(int i = 0 ; i < size ; i ++){
        for (int j = 0; j < i ; j ++){
            if (graph[j][i])
                vect.push_back(make_pair(j+1,i+1));
        }
    }
    int a = vect.size();
    cout<<a<<endl;
    for (int i = 0 ; i < a; i++){
        cout<< vect[i].first<< " " <<vect[i].second<< endl;
    }
    return 0;
}

