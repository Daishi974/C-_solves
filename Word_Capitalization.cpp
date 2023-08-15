//https://codeforces.com/problemset/problem/281/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
string s;
cin>>s;

for(i=0; i<s.size(); i++)
{
       if(s[0]>='a' && s[0]<='z')
       {
        s[0] = toupper(s[0]);
       }

       cout<<s[i];
}
}
