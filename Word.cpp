//https://codeforces.com/problemset/problem/59/A


#include<bits/stdc++.h>
using namespace std;
int main()

{
    
int i,j,c=0;
int n,m,t,l;
int arr[100], arr1[100];
int p=0,k=0,u=0,q=0;
string s;

cin>>s;

l = s.size();

for(i=0; i<l; i++)
{
     if(s[i]>='a' && s[i]<='z')
     {
      q++;
     }
     else
     {
      u++;
     }
}
if(q>=u)
     {
        
for(i=0; i<l; i++)
{
    
      if(s[i]>='A' && s[i]<='Z')   
      {
        s[i] = s[i] +32;
      }
    cout<<s[i]; 

}
     }


     else{
for(i=0; i<l; i++)
{
    
      if(s[i]>='a' && s[i]<='z')   
      {
        s[i] = s[i] -32;
      }
     
cout<<s[i]; 
}

     }



}
