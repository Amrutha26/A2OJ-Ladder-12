#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   vector<int> ans;
   while(t--) {
       int n;
       cin >> n;
       int arr[n];
       for(int i=1; i<=n; i++) {
           cin >> arr[i];
       }
     
      for(int j=1; j<=n; j++) {
          if(arr[j] != arr[j+1] && arr[j+1] == arr[j+2]) {
              ans.push_back(j);
              break;  
          } else if(arr[j] != arr[j+1] && arr[j+1] != arr[j+2]) {
              ans.push_back(j+1);
              break;
          } else if(arr[n] == arr[n-1]) {
              ans.push_back(n);
              break;
          } else {
              break;
          }
      }

   }

   vector<int>::iterator it;
   for(it = ans.begin(); it != ans.end(); it++) {
       cout << *it << "\n";
   }
   
   return 0;
}