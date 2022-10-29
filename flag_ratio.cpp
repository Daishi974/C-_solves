#include<bits/stdc++.h>

using namespace std;

//typedef long long int64;
const double PI = acos(-1.00);

int main()

{

  int t, l;

double w, r,red,green;

scanf("%d", &t);

while(t--) 
{
scanf("%d", &l);

w = 0.6 * l;
r = 0.2 * l;

red=PI * r * r;
green=w * l - red;

printf("%.2f %.2f\n", red, green);
}

return 0;
}
