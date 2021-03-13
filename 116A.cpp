#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int exit, enter;
    int max = 0;
    int sum = 0;
    while(n>0) {
        cin >> exit >> enter;
        sum = sum - exit + enter;
        if(sum > max) {
            max = sum;
        }
        n--;
    }

    cout << max;
    return 0;
}