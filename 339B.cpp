#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; i++) {
        cin >> a[i];
    }
    long long res = 0;
    int cur = 1;
    for(int i=0; i<m; i++) {
        if(a[i] < cur) {
            res+= n - cur + a[i];
            cur = a[i];
        } else {
            res+= a[i] - cur;
            cur = a[i];
        }
    }

    cout << res << endl;
    return 0;
}