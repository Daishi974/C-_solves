#include <iostream>

using namespace std;

int main() 
{
  
int n,i,k,sum[100000],m;

cin>>n;

for(i=0; i<n; i++)
{
    cin>>k>>m;

     sum[i]=k+m;
}



for(i=0; i<n; i++)
{

    cout<<sum[i]<<endl;
}
   
}
