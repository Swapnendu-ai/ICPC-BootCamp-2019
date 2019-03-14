#include <bits/stdc++.h>

using namespace std;

#define EPS 1E-9

bool equal(long double a, long double b) {
    return fabsl(a - b) < EPS;
}

bool lessthan(long double a, long double b) {
    return a + EPS < b;
}

int main() {
    vector<pair<int, int> > pnts;
    vector<long double> dist;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        pnts.push_back(make_pair(x, y));

    }

    dist.push_back(((pnts[0].first - pnts[1].first) * (pnts[0].first - pnts[1].first)) + ((pnts[0].second - pnts[1].second) * (pnts[0].second - pnts[1].second)));
    dist.push_back(((pnts[1].first - pnts[2].first) * (pnts[1].first - pnts[2].first)) + ((pnts[1].second - pnts[2].second) * (pnts[1].second - pnts[2].second)));
    dist.push_back(((pnts[0].first - pnts[2].first) * (pnts[0].first - pnts[2].first)) + ((pnts[0].second - pnts[2].second) * (pnts[0].second - pnts[2].second)));

    sort(dist.begin(), dist.end());

    long double tmp = dist[0] + dist[1];

    if (equal(tmp, dist[2])) {
        cout << "RIGHT";
        return 0;
    } else if (lessthan(tmp, dist[2])) {
        cout << "OBTUSE";
        return 0;
    } else {
        cout << "ACUTE";
        return 0;
    }

    return 0;
}
