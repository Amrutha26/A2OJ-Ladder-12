#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r,g,b,s=0,ss=0;
    cin >> r >> g >> b;

    if(r==g && g==b && r==b) {
        cout << r << endl;
        return 0;
    }

    s+= r/3 + g/3 + b/3;

    vector <long long> v;

    v.push_back(s);

    long long d = min(r, min(g,b));

    for(long long i=0; i<3; i++) {
        if(d>=0) {
            ss = i + ((r-i)/3 +(b-i)/3 + (g-i)/3);
            v.push_back(ss); 
        }

        d--;
    }

    sort(v.rbegin(), v.rend());

    cout << v[0] << endl;

    return 0;
}