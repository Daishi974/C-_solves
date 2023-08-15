//https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,c=0;

string s;

cin>>s;

sort(s.begin(), s.end());

c = unique(s.begin(), s.end()) - s.begin();

if((c%2)!=0)
{
    cout<<"IGNORE HIM!";
}
else if((c%2)==0)
{
    cout<<"CHAT WITH HER!";
}
return 0;

}
