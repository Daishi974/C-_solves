#include<bits/stdc++.h>
Using namespace std;

int main(){
int A,B,div=0,mul=0;
 
 cin>>A>>B;
if(A>=1 && B>=1 && A<=100000 && B<=100000){
 if(A>B)
 {
    div=A/B;
    
    mul=div*B;
 
    if(mul==A)
    {
   cout<<div;
 }
 
 else 
 {
cout<<div+1;
 
 }
 }
 
 
 
 else if(B>A) {
 
   div=1;
cout<<div;
 
 }
 }  

 else 
 {
    cout<<"0";
 }
}
