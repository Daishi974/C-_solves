//https://codeforces.com/problemset/problem/158/A



#include <iostream>

using namespace std;

int main()
{
 int n,p,i,t,c=0;
 int m[100];
 cin>>n>>t;

for(i=0; i<n; i++)
{
       cin>>m[i];



}
for(i=0; i<n; i++)
{
       if(m[i] >= m[t-1] && m[i]!=0)
       {
        c++;
       }

}

cout<<c;

}
