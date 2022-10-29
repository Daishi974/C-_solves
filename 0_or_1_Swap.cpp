
#include <bits/stdc++.h>

using namespace std;

int main()

{
int n,arr[100],i,count=0;

cin>>n;

for(i=0; i<n; i++)
{
    cin>>arr[i];
} 

for(i=0; i<n; i++)
{
    if(arr[i]!=i+1)
    {
     count++;
    }
}

if(count>2)
{
    cout<<"NO";
}
else
{
    cout<<"YES";
}

}
