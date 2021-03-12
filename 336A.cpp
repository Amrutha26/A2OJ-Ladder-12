#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int a =1, b=1;
    if(x<0) {
        x*=-1;
        a=-1;
    } 
    if(y<0) {
        y*=-1;
        b=-1;
    }
    if(a==1) {
        cout << 0 << " " << b*(x+y) << " " << a*(x+y) << " " << 0;

    } else {
        cout << a*(x+y) << " " << 0 << " " << 0 << " " << b*(x+y);
    }

    return 0;
}