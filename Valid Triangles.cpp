#include <iostream>

using namespace std;

int main() 
{
  
int n,i,j,k,l,sum[1000];

cin>>n;

for(i=0; i<n; i++)
{
    cin>>j>>k>>l;

sum[i]=j+k+l;

}



for(i=0; i<n; i++)
{
    

    if(sum[i]==180)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }


    
}


} 
