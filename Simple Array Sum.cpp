#include<bits/stdc++.h>
#include <cstdlib>
using namespace std ;

int main()

{
int n,i,m,sum=0;

cin>>n;

for(i=0; i<n; i++)
{
    cin>>m;

    sum+=m;
}

cout<<sum;
}
