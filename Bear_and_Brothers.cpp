#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,c=0;
int n,m;
int p=0,l=0;
cin>>n>>m;

do
{
    n*=3;
    m*=2;
    p++;
} while (n<m || n==m);

cout<<p;



}
