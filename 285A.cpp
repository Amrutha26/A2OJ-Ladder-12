#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k;
    cin >> n >> k;
    for(long long int i=k+1; i>0; i--) {
        cout << i << " ";
    }
    for(long long int i=k+2; i<=n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}