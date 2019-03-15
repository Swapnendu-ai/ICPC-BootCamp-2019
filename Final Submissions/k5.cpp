#include <bits/stdc++.h>

using namespace std;

#define EPS 1E-9

bool equal(long double a, long double b) {
    return fabsl(a - b) < EPS;
}

bool lessthan(long double a, long double b) {
    return a + EPS < b;
}
long long cross_product(pair<int, int> a, pair<int, int> b)
{
    return (a.first*b.second - a.second*b.first)/2;
}

int main() {


    long long n;
    vector<pair<int, int> > pts;
    int x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        pts.push_back(make_pair(x, y));
    }


    long double sum = 0;
    for (int i = 0; i < n - 1 ; i ++){
        sum += ((pts[i].first + pts[i+1].first) * (pts[i].second - pts[i+1].second )) / 2;
    }
    sum += (pts[n-1].first + pts[0].first) * (pts[n-1].second - pts[0]. second)/2;

    printf("%.9Lf",  sum) ;
    return 0;
}

