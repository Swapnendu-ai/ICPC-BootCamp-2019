#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > pnts;
    vector<pair<int, int> > pnts1;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pnts.push_back(make_pair(x, y));
        pnts1.push_back(make_pair(y, x));
    }
    if (n == 1) {
        cout << 0;
        exit(0);
    } else {
        int flag = 0;
        for (int i = 1; i < n; i++) {
            if (pnts[i].first != pnts[i+1].first) {
                flag = 1;
                break;
            }
            if (pnts[i].second != pnts[i+1].second) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << 0;
            exit(0);
        }
    }

    sort(pnts.begin(), pnts.end());
    sort(pnts1.begin(), pnts1.end());
    int x1 = pnts[0].first - pnts[n - 1].first;
    int y1 = pnts1[0].first - pnts1[n - 1].first;
    cout << abs(x1 * y1);

    return 0;
}
