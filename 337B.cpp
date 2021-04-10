#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,x,y,p1,p2;
    cin >> a >> b >> c >> d;
    if(a > c && a > d ||  b > c && b > d ) {
        x = min(a,b) / c;
        y = min(a,b) / d;
        p1 = c * x;
        p2 = d * y;
        cout << min(a,b);

    }
    return 0;
}