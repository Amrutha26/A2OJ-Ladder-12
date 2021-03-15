#include <bits/stdc++.h>
using namespace std;

long long s,n,a[1001],b[1001];

int main() {
    cin >> s >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i] >> b[i];
    }
    for(int i=1; i<=n; i++) {
        for(int j = i+1; j<=n; j++) {
            if(a[i] > a[j]) {
                swap(a[i],a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for(int i=1; i<=n; i++) {
        if(s>a[i]) {
            s+= b[i];
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}