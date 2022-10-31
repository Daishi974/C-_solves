#include<bits/stdc++.h>
#include <cstdlib>
using namespace std ;

int main()

{
long long n,m,i,k=0,l=0,p=0;

cin>>n>>m;



k=n+m;

l=k/2;


n=n-l;
m=m-l;

if(abs(n)==abs(m))
{
    cout<<l;
}
else
{
    cout<<"IMPOSSIBLE";
}

}
