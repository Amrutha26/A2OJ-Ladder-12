#include <bits/stdc++.h>
using namespace std;
const int SIZE = 3000;

int main()  {
    int n, min = 1, arr[SIZE];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        if(arr[i] == min) {
            min++;
        }
    }

    cout << min;
    return 0;
}