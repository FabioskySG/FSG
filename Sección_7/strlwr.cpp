//Pasar minusculas - strlwr()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "ALEJANDRO";

    strlwr(palabra); //Tampoco está en linux

    cout<<palabra<<endl;

    return 0;
}