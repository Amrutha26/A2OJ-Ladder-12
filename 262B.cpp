#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int min1 = INT_MAX;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x<0 && k!=0) {
            sum -= x;
            k--;
        } else {
            sum += x;
        }

        min1 = min(min1, abs(x));
    }

    if(k!=0 && (k%2!=0)) {
        sum -= (2*min1);
    }

    cout << sum << endl;
    return 0;
}
