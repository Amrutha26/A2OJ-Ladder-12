
#include <bits/stdc++.h>
 
using namespace std;

int n,m;
const int N = 5e2 + 10;
int mark[N][N];
vector <int> ans;

bool is_prime(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i == 0)
			return false;
	return (n > 1);
}
int near_prime(int n){
	for(int i=n;i<1000000;i++)
		if(is_prime(i))
			return (i-n);
}
int min_arr(vector<int> vec){
	int min1 = vec[0];
	for(int i=0;i<vec.size();i++)
		if(vec[i] < min1)
			min1 = vec[i];
	return min1;
}
void input(){
	cin >> n;
	cin	>> m;
	for(int i=0;i<n;i++)
		for(int b=0;b<m;b++)
			cin >> mark[i][b];
}
void solve(){	
	for(int i=0;i<n;i++)
		for(int b=0;b<m;b++)
			mark[i][b] = near_prime(mark[i][b]);

	int sum;
	for(int i=0;i<n;i++){
		sum = 0;
		for(int b=0;b<m;b++){
			sum += mark[i][b];
		}
		ans.push_back(sum);
	}
	for(int i=0;i<m;i++){
		sum = 0;
		for(int b=0;b<n;b++){
			sum += mark[b][i];
		}
		ans.push_back(sum);
	}
	cout << near_prime(n);
}
 

int main(){
	ios_base::sync_with_stdio(0),cin.tie(),cout.tie();

		input();
		solve();

	return 0;
}