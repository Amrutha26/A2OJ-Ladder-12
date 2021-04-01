#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x;
    int a[100];
    vector <int> b;
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> a[i];
    }
    sort(a, a+m);

    for(int i=0; i<m-n+1; i++) {
        b.push_back(a[i+n-1] - a[i]);
    }

    x = b[0];
    for(int i=0; i<b.size(); i++) {
        x = min(x,b[i]);
    }

    cout << x;
    return 0;
}