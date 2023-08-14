//https://codeforces.com/problemset/problem/263/A


/*#include<bits/stdc++.h>*/

#include <iostream>
using namespace std;

int main(){

   int n=5,j;


   int a[n][n];

   for(int i=1; i<= n; i++)

    {

     for( j=1; j<= n; j++)
     {


       cin>>a[i][j];




     }

   }

  for(int i=1; i<= n; i++){

    for(int j=1; j<= n; j++)
        if(a[i][j]==1)
        {
          cout<< abs(i-3) + abs(j-3);


        }
  }

}
