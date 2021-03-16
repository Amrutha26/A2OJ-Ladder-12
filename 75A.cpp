#include <bits/stdc++.h>
using namespace std;

int removeZeroes(int num) {
    int ret = 0;
    int ten = 1;
    while(num != 0) {
        int dig = num % 10;
        num /= 10;
        if(dig != 0 ) {
             ret += dig * ten;
             ten *= 10;
        }
    }

    return ret;
}

int main() {
    int a,b,c;
    cin >> a >> b;
    c = a + b;
    a = removeZeroes(a);
    b = removeZeroes(b);
    c = removeZeroes(c);
    
    if(a+b == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}