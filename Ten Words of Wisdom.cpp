//https://codeforces.com/contest/1850/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l,a,b;
int arr[1000], arr1[1000],sum[100], arr2[100];
int p=0,k=0,u=0,q=0;
string s;


cin>>t;

while(t--)
{   k=0, p;

   cin>>n;

   for(i=1; i<=n; i++)
   {

    cin>>arr[i]>>arr2[i]; 

    if(arr[i]<=10)
    {
      if(arr2[i]>k)
      {
         k = arr2[i];
         p = i;
      }
    }
   }

cout<<p<<"\n";

}


}
