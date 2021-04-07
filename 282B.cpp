#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
}

int main() {
    fast();
    int n;
    cin >> n;
    int sum = 0;
    while(n--) {
        int a,g;
        cin >> a >> g;
        if(sum + a <=500) {
            sum += a;
            cout << "A";
        } else {
            sum -= g;
            cout << 'G';
        }
    }

    return 0;
}