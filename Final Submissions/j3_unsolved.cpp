// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.first < b.first;
}

bool cmp1(pair<int,int> a, pair<int,int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return true;
}

int main() {
    int M;
    cin >> M;
    vector<pair<int,int> > a;
    vector<pair<int,int> > b;
    vector<pair<int,int> > c;
    int x, y;
    for (int i = 0;; i++) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        }
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end(), cmp);
    // for (auto i = a.begin(); i < a.end(); i++) {
    //     // cout << (*i).first << " " << (*i).second << endl;
    // }
    int covered = 0;
    //b.push_back(a[0]);
    char flag = 1;
    int count = 0;

    for (auto i = a.begin(); i < a.end(); i++) {
        if ((*i).second > 0 && flag) {
            b.push_back((*i));
            covered = (*i).second;
            flag = 0;
        }
        for (auto j = i + 1; j < a.end(); j++) {
            if ((*j).first <= covered) {
                c.push_back((*j));
            }
        }
        if ((*i).second > covered) {
            sort(c.begin(), c.end(), cmp1);
            b.push_back(c.front());
            covered = (c.front()).second;
        }
    }

    long long l;
    long long r = 0;
    auto i = b.begin();
    // cout << "safs" << (*(b.begin())).first << endl;
    if ((*i).first > 0) {
        cout << "No solution";
        exit(0);
    }
    for (; i < b.end() - 1; i++) {
        if ((*i).first > r) {
            cout << "No solution";
            exit(0);
        }
        r = (*i).second;
    }

    // cout << ":LOksdoaif";

    if ((*i).second < M) {
        cout << "No solution";
        exit(0);
    }

    // b.push_back(make_pair(l,covered));
    cout << b.size() << endl;
    for (auto i = b.begin(); i < b.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}

