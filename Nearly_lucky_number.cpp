#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define li long int
using namespace std;

int main()
{
 int n,c=0,t=0;

 cin>>n;

 while(n!=0)
 {
   t=n%10;
   n/=10;

   if(t==7 || t==4)
   {
     c++;
   }
 }

  if(c==7 || c==4)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }

}
