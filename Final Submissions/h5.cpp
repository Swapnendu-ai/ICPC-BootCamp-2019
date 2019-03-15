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
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    pair<int, int> vec1 = make_pair(x - x1, y - y1);
    pair<int, int> vec2 = make_pair(x2 - x1, y2 - y1);

    if ((vec1.first - vec2.second) == (vec1.second - vec2.first)) {
        if (x >= min(x1, x2) && x <= max(x1, x2) && y <= max(y1, y2) && y >= min(y1, y2)) {
            cout << "YES";
            exit(0);
        }
    }

    cout << "NO";

    return 0;
}

