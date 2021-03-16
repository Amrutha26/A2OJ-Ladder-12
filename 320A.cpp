#include <bits/stdc++.h>
using namespace std;

bool is_magic(string num) {
    for(int i=0; i<(int)num.size(); i++) {
        if(num[i] != '1' && num[i] != '4') {
            return false;
        }
    }

    if(num[0] == '4') {
        return false;
    }

    if(num.find("444") != -1) {
        return false;
    }

    return true;
}

int main() {
    string num;
    cin >> num;

    if(is_magic(num)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}