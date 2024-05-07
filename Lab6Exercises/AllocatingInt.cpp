#include<iostream>
#include<string>

using namespace std;

int main(){
    // x was statically allocated
    //unnamed variable was dynamically allocated
    int integer = 0;
    int* integerz = nullptr; 

    cout<<"Value to be assigned to the dynamically allocated integer is: ";
    cin>>integer;

    integerz = new int[integer];

    char sString[] ="The value of dynamically allocated string";
    char *psString = sString;

    cout<<"The value of the dynamically allocated integer is: "<<integer<<endl;

    cout<<"The value of the dynamically allocated string is: "<<sString<<endl;

    return 0;
}