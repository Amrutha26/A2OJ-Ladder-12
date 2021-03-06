#include <bits/stdc++.h>
using namespace std;

int r,c;
const int maxR = 10, maxC =10;
string grid[maxR];
bool rows[maxR], cols[maxC];

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        cin >> r >> c;
        for(int i=0; i<r; i++) {
            cin >> grid[i];
            for(int j=0; j<c; j++) {
                if(grid[i][j] == 'S') {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }

        int ans=0;
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(grid[i][j] == 'S' || (rows[i] && cols[j])) {
                    continue;
                }
                ans++;
            }
        }

        cout << ans;
        return 0;
    }
