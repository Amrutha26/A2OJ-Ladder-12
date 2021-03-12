#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,t,f;
    cin >> n >> k;
    int s[10000];
    for(int i=0; i<n; i++) {
        cin >> f >> t;
        if(t>k) {
            s[i] = f - (t-k);
        } else {
            s[i] =f;
        }
    }
    sort(s,s+n);
    cout << s[n-1] << endl;
    return 0;
}