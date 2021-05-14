#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int count;
        if(s1.length() == s2.length()) {
            int t = s1.length();
            for(int i=0; i<t; i++) {
                if(s1[i] != s2[i]) {
                    count++;
                }
            }
        }
    
   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   if(count==2&&s1==s2)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
 
   return 0;

}
