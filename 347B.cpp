#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0, x=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i] == i) {
            count++;
        } else {
            if(x == 0 && arr[arr[i]] == i) {
                count = count + 2;
                x = 1;
            }
        }
    }

    if(x == 0 && count != n) {
        cout << count + 1 << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}