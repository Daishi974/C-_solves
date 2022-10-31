#include<bits/stdc++.h>

using namespace std ;

int main()

{
int n,i,sum=0;
char m[100000];

cin>>n;

for(i=0; i<n; i++)
{
    cin>>m[i];

   
}

for(i=0; i<n; i++)
{

    if(m[i]=='b' || m[i]=='B')
    {
        cout<<"BattleShip"<<endl;
    }
    else if(m[i]=='c' || m[i]=='C')
    {
        cout<< "Cruiser"<<endl;
    }
     else if(m[i]=='d' || m[i]=='D')
     {
        cout<<"Destroyer"<<endl;
     }
      else if(m[i]=='f' || m[i]=='F')
      {
        cout<<"Frigate"<<endl;
      }
}


}
