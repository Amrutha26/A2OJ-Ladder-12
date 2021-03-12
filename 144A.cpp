#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int a[101];
    cin >> n;
    int min = 101, max = -1;
    int minindex, maxindex;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] > max) {
            max = a[i];
            maxindex = i;
        }
        if(a[i] <= min) {
            min = a[i];
            minindex = i;
        }
    }
    int ans = 0;
    ans = maxindex;
    ans += n - minindex - 1;
 
    if(minindex < maxindex) {
        cout << ans - 1;
    } else {
        cout << ans;
    }
 
    return 0;
}