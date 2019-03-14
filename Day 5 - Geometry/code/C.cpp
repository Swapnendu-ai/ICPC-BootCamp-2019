#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int> > rec1;
    vector<pair<int, int> > rec2;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    rec1.push_back(make_pair(x1, y1)); // top left
    rec1.push_back(make_pair(x2, y1)); // top right
    rec1.push_back(make_pair(x1, y2)); // bottom left
    rec1.push_back(make_pair(x2, y2)); // bottom right

    cin >> x1 >> y1 >> x2 >> y2;
    rec2.push_back(make_pair(x1, y1)); // top left
    rec2.push_back(make_pair(x2, y1)); // top right
    rec2.push_back(make_pair(x1, y2)); // bottom left
    rec2.push_back(make_pair(x2, y2)); // bottom right

    



    return 0;
}
