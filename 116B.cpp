#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,i,j,count=0;
    cin >> n >> m;
    char a[n+5][m+5];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j] == 'W') {
                if(a[i][j-1]=='P' || a[i][j+1]=='P' || a[i-1][j]=='P' || a[i+1][j]=='P') {
                    count++;
                }
            }
        }
    }

    cout << count;
    return 0;
}