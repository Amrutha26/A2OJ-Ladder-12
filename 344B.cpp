#include <bits/stdc++.h>>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    for(int x=0; x <= a; x++) {
        int y = b - x;
        int z = a - x;
        if(b != x + y || c != y + z || y < 0 || z < 0) {
            continue;
        }
        cout << x << " " << y << " " << z;
        return 0;
    }
    cout << "Impossible";
    return 0;
}