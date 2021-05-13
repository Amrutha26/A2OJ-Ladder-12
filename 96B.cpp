#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
    int c4 = 0, c7 = 0;
    while(n) {
        int r = n % 10;
        if(r != 4 && r != 7) {
            return false;
        }
        if(r==4) {
            c4++;
        } else {
            c7++;
        }

        n /= 10;
    }

    if(c4 == c7) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if(n > 77774444) {
        cout << "4444477777" << endl;
        return 0;
    }
    while(true) {
        if(solve(n)) {
           cout << n << endl; 
           return 0;
        } else {
            n++;
        }
    } 
}