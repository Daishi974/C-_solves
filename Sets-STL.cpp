#include<bits/stdc++.h>

using namespace std;

//typedef long long int64;

int main()

{

 set<int>s;

 int n,i;

 cin>>n;

 for(i=0; i<n; i++)
 {
    int x=0,y=0;

    cin>>y>>x;

    if(y==1)
    {
        s.insert(x); 
    }
    else if(y==2)
    {
        s.erase(x);
    }
    else if(y==3)
    {
        set<int>::iterator itr=s.find(x);

        if(itr==s.end())
        {
            cout<<"No"<<"\n";
        }
        else
        {
            cout<<"Yes"<<"\n";
        }

    }
 }
return 0;
}
