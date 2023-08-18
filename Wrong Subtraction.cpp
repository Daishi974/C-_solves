//https://codeforces.com/problemset/problem/977/A


#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l;
int arr[100], arr1[100];
int p=0,k=0,u=0,q=0;
string s;

cin>>n>>m;
p = sizeof(n);

for(i=0; i<m; i++)
{
  if(n%10==0)
  {
    n=n/10;
  }
  else{
    n-=1;
  }
}
cout<<n;



}
