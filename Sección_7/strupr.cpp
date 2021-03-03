//Pasar una palabra a MAYUSCULA - strupr()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "alejandro";

    strupr(palabra); //Tampoco está en linux

    cout<<palabra<<endl;

    return 0;
}