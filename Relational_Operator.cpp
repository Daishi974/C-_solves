#include <iostream>

using namespace std;

int main() 
{
  
int n,i,j[100000],k[100000];

cin>>n;

for(i=0; i<n; i++)
{
    cin>>j[i]>>k[i];



}

for(i=0; i<n; i++)
{

    if(j[i]<k[i])
    {
        cout<<"<"<<endl;
    }
    else if(j[i]>k[i])
    {
         cout<<">"<<endl;
    }
    else if(j[i]==k[i])
    {
         cout<<"="<<endl;
    }

}





    
}
