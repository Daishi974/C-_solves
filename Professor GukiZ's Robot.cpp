#include <bits/stdc++.h>

using namespace std;

int main()

{
long long int x1,y1,x2,y2,i,s1=0,k1=0;

cin>>x1>>y1;

cin>>x2>>y2;

if(x1<x2)
{
    s1=x2-x1;
}
else if(x1>x2)
{
    s1=x1-x2;
}

if(y1<y2)
{
  k1=y2-y1;
}
else if(y1>y2)
{
    k1=y1-y2;
}


if(s1>k1)
{
    cout<<s1;
}
else if(s1<k1)
{
    cout<<k1;
}
else if(s1==k1)
{
    cout<<s1;
}

}
