#include<bits/stdc++.h>

using namespace std;


int main()

{
   
long long int n,i,m,k,j,l,lm=0;

cin>>n;

for(i=0; i<n; i++)
{
    

    cin>>m>>k;
     
     l=m*k;

while(m!=k)
{
    if(m>k)
    {
         m-=k;
    }
    else
    {
        k-=m;
    }
}

lm=l/m;
cout<<m<<" "<<lm<<endl;

}

}
