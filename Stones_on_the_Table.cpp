//https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,c=0;
int n;
cin>>n;
string s;

cin>>s;

for(i=0; i<n; i++)
{
    if(s[i]==s[i+1])
    {
        c++;
    }
}

cout<<c;

return 0;

}
