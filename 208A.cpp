#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[10000];
    cin >> str;
    int i,k;
    k = strlen(str);
    for(i=0; i<k;) {
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
             cout << " ";
             i += 3;
        } else {
            cout << str[i];
            i++;
        }
    }

    return 0;
}