#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int min = 11000, max = 0;
    int count = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(i==0) {
            min = x;
            max = x;
        } else if(x < min) {
            min= x;
            count++;
        } else if(x > max) {
            max = x;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}