#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char input[100000][100000];
    int i=0;
    int k[100000];
    while(true){
        cin >> input[i];

        if((strcmp(input[i], "*"))==0){
            break;
        }
        i++;
    }


    for(int j=0; j<i; j++){

    k[i]++;
           cout<<"Case " <<k[i] <<": ";
        if((strcmp(input[j], "Hajj"))==0){
            cout << "Hajj-e-Akbar" << endl;
        }
        else if((strcmp(input[j], "Umrah"))==0){
            cout << "Hajj-e-Asghar" << endl;
        }
    }
}
