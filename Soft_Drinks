#include<bits/stdc++.h>

using namespace std;


int main()

{


    int n,k,l,c,d,p,nl,np;

    int drink=0,lime=0,salt=0,toast=0;

    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np)
    {
        drink = (k * l) / nl;

        salt = p / np;

        lime = c * d;

        toast = min(drink, min(salt, lime)) / n;
        
        cout<<toast<<endl;
    }
}
