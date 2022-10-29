#include <iostream>

using namespace std;

int main() 
{
  
int n,i,k,sum[100000],m;

cin>>n;

for(i=0; i<n; i++)
{
    cin>>k;

    while(k>0)    
{    
m=k%10;    
sum[i]=sum[i]+m;    
k=k/10;    
}  
}
for(i=0; i<n; i++)
{

    cout<<sum[i]<<endl;
}
   
}
