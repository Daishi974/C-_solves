//https://codeforces.com/problemset/problem/71/A

#include <iostream>

using namespace std;

int main()
{
 int n,i,t,c;

 string s;
 cin>>t;

 while(t--)
 {
     cin>>s;
     c = s.size();
     if(s.size() >10 )
     {
         for(i =0; i<s.size(); i++)
         {

             if(i == 0){
                cout <<s[i] <<c-2;
             }

             if(i == (c-1))
             {
                 cout<< s[i];
             }

         }
         cout<<"\n";
     }
     else
     {
         cout<<s<<"\n";
     }


 }
}
