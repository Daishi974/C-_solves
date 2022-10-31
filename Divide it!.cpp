#include<bits/stdc++.h>

using namespace std;


int main()

{
   
long long int n,i,arr[100000],j,p,k=0;


cin>>n;



for(i=0; i<n; i++)
{
    cin>>p;
    int c=0;
   
while(p!=1)
{
  if(p%2==0)
  {
    p=p/2;
    c++;
  }
  else if(p%3==0)
  {
      p=2*p/3;
      c++;
  }
 
  else if(p%5==0)
  {
      p=4*p/5;
      c++;
  }
  else 
  {
    cout<<-1<<endl;
    break;
  }

}

if(p==1)
{
    cout<<c<<endl;
}

}
}
