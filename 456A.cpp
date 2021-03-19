#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

int main() {
    int n, a[N], b[N];
    pair <int,int> p[N];

    cin >> n;
    for(int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }
    sort(p,p+n);
    for(int i=0; i<n-1; i++) {
        if(p[i].second > p[i+1].second) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}