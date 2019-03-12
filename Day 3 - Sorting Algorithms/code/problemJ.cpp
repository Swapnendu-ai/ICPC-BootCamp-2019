// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    int initL=0;
    cin >> M;
    vector<pair<int,int> > a;
    vector<pair<int,int> > b;
    int x, y;
    for (int i = 0;; i++) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        }
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end());
    int i = 0 ;
    int size = a.size();
    int prevR=0;
    while (i < size)
    {
        i--;
        int l = a[i].first;
        while(l< initL) {i++; l = a[i].first;
            }
        i--;
        b.push_back(a[i]);
        i++;
        int newR = a[i].second;
        if (newR <= prevR){
            cout << "No solution !"<<endl;
            return 0;
        }
        initL = newR;
        prevR=newR;


    }

    if ((*(b.end()-1)).second <M)
        cout << "No solution !"<<endl;
    else {cout << b.size() << endl;
    for (auto i = b.begin(); i < b.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }}
    return 0;
}
