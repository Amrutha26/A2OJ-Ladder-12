#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FOR(i, j, k, in) for (int i=j; i<k; i+=in)
#define RFOR(i, j, k, in) for (int i=j; i>=k; i-=in)
 
#define F(i, n) FOR(i, 0, n, 1)
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, v;
    cin >> n >> v;
    int arr[3001] = {0};
 
    F(i, n){
    	int a, b;
    	cin >> a >> b;
    	arr[a] += b;
    }
 
    int count = 0;
 
    FOR(i, 1, 3002, 1){
    	int temp = v;
    	if(arr[i-1] > 0){
    		int sub = min(arr[i-1], temp);
    		arr[i-1]-=sub;    	
    		temp-=sub;
    		count+=sub;
    	}
    	if(i < 3001){
    		count += min(temp, arr[i]);
    		arr[i] -= min(temp, arr[i]);
    	}
    }
 
    cout << count << endl;
}
