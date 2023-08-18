//https://codeforces.com/contest/1850/problem/C

#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j;
int n,m,t,l,a,b;
int arr[1000], arr1[1000],sum[100], arr2[100];
int p=0,k=0,u=0,q=0;
string s,f,g[100];


cin>>t;

while(t--)
{   
  char c;
  string f;
  b=8;

  while(b>0)
  {
    for(j=0; j<8; j++)
    {
         cin>>c;
         if(c!='.')
         {
               f+=c;
         }
    }
    b--;
  }

  cout<<f<<endl;

 
 

}


}
