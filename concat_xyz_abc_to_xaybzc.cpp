#include <bits\stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{

 char c[100], k[100];
 int i, count=0,m=0;
gets(c);
gets(k);
 for(i=0; c[i]!='\0'; i++)
 {

    if(c[i]!=' ')
    {
       count++;
    }
 } 

 for(i=0; k[i]!='\0'; i++)
 {

    if(k[i]!=' ')
    {
       m++;
    }
 } 

if(count>m)
{

   for(i=0; i<count; i++)
   {

      cout<<c[i]<<k[i];
   }
}

else if (count==m)
{
for(i=0; i<count; i++)
   {

      cout<<c[i]<<k[i];
   }

}

 else if(m>count)
{

   for(i=0; i<m; i++)
   {

      cout<<c[i]<<k[i];
   }
}

}


