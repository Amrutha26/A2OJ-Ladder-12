#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    int arr[n];
    int sum = 0, count = 0, index =0;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        sum += arr[i];
        if(sum <= t) {
            count++;
        } else {
            sum -= arr[index];
            index++;
        }
    }

    cout << count;
    return 0;

}