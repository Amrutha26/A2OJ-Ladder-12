#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pos = 0;
    long long min = 10000000001;
    cin >> n;
    int c[100001];
    for(int i=0; i<n; i++) {
        cin >> c[i];
    }
    for(int i=0; i<n; i++) {
        if(c[i] <= min) {
            min = c[i];
            pos = i+1;
        }
    }
    sort(c,c+n);
    if(c[0] == c[1]) {
        cout << "Still Rozdil";
    } else {
        cout << pos;
    }

    return 0;
}