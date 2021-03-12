#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum =0, count =0;
    int cookies[100];
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> cookies[i];
        sum += cookies[i];
    }

    for(int i=0; i<n; i++) {
        if((sum - cookies[i]) % 2 == 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}