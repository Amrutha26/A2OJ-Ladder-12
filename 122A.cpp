#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    if(n%7 == 0 || n%4 == 0 || n%47 == 0 || n%74 == 0) {
        cout << "YES";
        return 0;
    }
    while(n != 0) {
        if(n%10 != 7 && n%10 != 4) {
            cout << "NO";
            return 0;
        }
        n /= 10;
    }

    cout << "YES";
    return 0;
}