//https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main()
{
 int n,m,p,i,t,c=0;

 cin>>t;

 while(t--)
 {
   cin>>n>>m>>p;

   if(n+m+p >=2)
   {
     c++;
   }

 }

 cout<<c<<"\n";
}
