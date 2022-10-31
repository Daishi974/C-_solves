#include<bits/stdc++.h>

using namespace std;


int main()

{

int n,i,m,k,j,p,second,first;

cin>>n;

for(i=0; i<n; i++)
{
first=second=100000000;
cin>>m;

for(j=1; j<=m; j++)
{

cin>>k;

if(k<first)
{
    second=first;
    first=k;
}
else if(k<second)
{
    second=k;
}

}
cout<<first+second<<endl;

}


}
