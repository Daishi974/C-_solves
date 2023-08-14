//https://codeforces.com/problemset/problem/282/A


#include <iostream>

using namespace std;

int main()
{
int x, c=0, t, i;

string s;
cin>>t;

while(t--)
{
    cin>>s;
for(i =0 ; i<s.size(); i++){
    if(s[i]=='+')
    {
        c++;
    }
    else if(s[i]=='-')
    {
        c--;
    }
}


}

cout<<c/2;

}
