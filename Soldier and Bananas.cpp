//https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l;
int arr[100], arr1[100];
int p=0,k=0;
string s;

cin>>n>>m>>l;

for(i=1; i<=l; i++)
{
  c+=i*n;
}

if(c>m){
cout<<c-m;
}
else{
  cout<<0;
}
}
