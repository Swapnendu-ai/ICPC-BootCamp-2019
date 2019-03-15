// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.first < b.first;
}

int main() {
    int size;
    cin >> size;
    vector<pair<int,int> > a;
    vector<pair<int,int> > b;
    int x, y;
    for (int i = 0; i < size; i++) {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end(), cmp);
    int l,covered;
    //b.push_back(a[0]);
    char flag = 1;
    for (auto i = a.begin(); i < a.end(); i++) {
        if(flag)
        {
            flag = 0;
            l = (*i).first;
            covered = (*i).second;
        }
        if((*i).first <= covered) {
            if((*i).second>covered)
                covered = (*i).second;
        }
        else
        {
            flag = 1;
            b.push_back(make_pair(l,covered));
            i--;
        }
        // if ((*i).first >= covered)
        // {
        //     if (i != a.begin()) {
        //         covered = (*(i-1)).second;
        //     }
        // else if((*i).second > covered)
        //     covered = (*i).second
        // }
    }
    b.push_back(make_pair(l,covered));
    cout << b.size() << endl;
    for (auto i = b.begin(); i < b.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << "Hello\n";
    for (auto i = a.begin(); i < a.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}

