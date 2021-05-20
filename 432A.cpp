// Ladder 13

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    int count = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x <= 5 - k) {
           count++;
        }
    }
    cout << count / 3 << endl;
    return 0;
}
