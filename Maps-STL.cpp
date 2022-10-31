#include<bits/stdc++.h>

using namespace std;

//typedef long long int64;

int main()

{

    map <string,int> m;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int Q = 0;
        cin>>Q;
        string x;
        if (Q == 1)
        {
            int y = 0;
            cin>>x;
            cin>>y;
            m[x] += y;
        }
        else if (Q == 2)
        {
            cin>>x;
            m.erase(x);
        }
        else if (Q==3)
        {
            cin>>x;

            map<string,int>::iterator itr=m.find(x);

            if (itr != m.end())
            {
                cout<<m[x]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    
    return 0;

}
