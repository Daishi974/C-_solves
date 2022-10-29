
#include <iostream>

using namespace std;

int main() 
{
  
int n,m[100000],i,odc=0,evc=0,odp=1,evp=1;

cin>>n;

for(i=0; i<n; i++)
{
    cin>>m[i];

     if(m[i]%2==0)
    {
      evc++;
    }
    else
    {
        odc++;
    }


    
}

for(i=0; i<n; i++)
{

    if(evc>odc)
    {
        if(m[i]%2==0)
        {
            odp++;
        }
        else
            {
                cout<<odp;
                break;
            }
    }

     if(evc<odc)
    {
        if(m[i]%2!=0)
        {
            evp++;
        }
        else
            {
                cout<<evp;
                break;
            }
    }
}



} 
