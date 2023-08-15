//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i, n, c, j;

 string s, cr;

 int temp;

 cin>>s;

 for(i=0; i<s.size(); i++)
 {
     if(s[i]!='+')
     {
        for(j=i+1;j<s.size(); j++)
        {
              if(s[j]<s[i])
              {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
              }          
        }
     }

 }

    bool isFirst = true;

    for (i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            if (!isFirst) {
                cout << "+";
            }
            cout << s[i];
            isFirst = false;
        }
    }
    cout << endl;
return 0;
}
