#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin >> n >> x >> y;
    int temp = n * y;
    temp = ceil((double)temp/100);
    int ans = temp - x;
    if(ans < 0) {
        ans = 0;
    }
    cout << ans;
    return 0;
}