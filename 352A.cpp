#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n5 = 0, n0 = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x == 5) {
           n5++;
        } else {
            n0++;
        }
    }
    if(n0==0) {
        cout << -1;
    } else {
        //To count the number of 9's and subtracting the remainder if it is not divisible by 9
        for(int i=0; n5 - n5%9; i++) {
            cout << 5;
        }
        //If the number of 5's is less than 9, then print 0
        if((n5-n5%9) == 0) {
            cout << 0;
        } else {
            //The number is 90, so we can add all the zeroes available to form the largest number divisible by 9
            for(int i=0; i<n0; i++) {
                cout << 0;
            }
        }
    }

    return 0;
}