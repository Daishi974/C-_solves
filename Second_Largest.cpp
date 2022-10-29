#include <iostream>

using namespace std;

int main() 
{
  
int n,i,j[100000],k[100000],l[100000],sum[1000];

cin>>n;

for(i=0; i<n; i++)
{
    cin>>j[i]>>k[i]>>l[i];



}

for(i=0; i<n; i++)
{

if((j[i]>l[i] && j[i]<k[i]) || (j[i]<l[i] && j[i]>k[i]))
{
    cout<<j[i];
}
else if((k[i]>l[i] && k[i]<j[i]) || (k[i]<l[i] && k[i]>j[i]))
{
    cout<<k[i];
}

else if((l[i]>k[i] && l[i]<j[i]) || (l[i]<k[i] && l[i]>j[i]))
{
    cout<<l[i];
}

cout<<"\n";
}







    
}
