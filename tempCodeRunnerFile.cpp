#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[] = {2,3,4,5,6,7,8,9,1,11};
    int count = 0;
    for(int i=0; i<sizeof(arr); i++) {
            int ans = arr[i] + 10;
            if(ans == 20) {
                count++;
            }
    }
    count+= 4;
    cout << count << endl;
    return 0;

}