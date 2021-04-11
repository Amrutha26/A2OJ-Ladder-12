#include <bits/stdc++.h>
using namespace std;

int main ()
{
int sum=0,l,r;
cin>>l>>r;
while (l <=4)
{
sum+=4;
l++;
}
while (l <=r)
{
sum+=7;
l++;
}
cout <<sum;
return 0;
}
