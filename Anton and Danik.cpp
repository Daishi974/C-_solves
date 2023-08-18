//https://codeforces.com/problemset/problem/734/A


#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l;
int arr[100], arr1[100];
int p=0,k=0,u=0,q=0;
string s;
cin>>n;


cin>>s;



for(i=0; i<n; i++)
{
  if(s[i] == 'D' || s[i] == 'd')
  {
    c++;
  }
  else{
    k++;
  }
}
if(c>k)
{
  cout<<"Danik" ;
}
else if(c<k)
{
  cout<<"Anton";
}
else
{
  cout<<"Friendship" ;
}

}
