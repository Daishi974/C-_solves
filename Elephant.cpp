//https://codeforces.com/problemset/problem/617/A


#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l;
int arr[100], arr1[100];
int p=0,k=0;
string s;

cin>>n;

if(n>=5)
{
  p=n%5;
  k=n/5;
  
  if(p==0)
  {cout<<k;}
  else
  {cout<<k+1;}

}

else
{
  cout<<1;
}

}
