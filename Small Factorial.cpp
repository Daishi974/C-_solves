#include<bits/stdc++.h>

using namespace std;


int main()

{

  int n,t,i,j;

  cin>>t;

  for(i=0; i<t; i++)
  {

    cin>>n;
    int fact=1;
    for(j=1; j<=n; j++)
    {
        fact=fact*j;
    }
    cout<<fact<<endl;
  }

}
