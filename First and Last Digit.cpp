#include<bits/stdc++.h>

using namespace std;


int main()

{

  int t,n,res,div,rem;

    cin>>t;
    
    for(int i=0; i<t; i++)
    {
       
        cin>>n;
        
        div=n;
        
        rem=n%10;

        while(div>=10)
        {
            
            div=div/10;
            
        }

        res=div;

        cout<<rem+div<<endl;
        
    }
   
    return 0;

}
