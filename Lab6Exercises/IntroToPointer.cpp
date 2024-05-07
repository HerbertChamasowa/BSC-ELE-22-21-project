#include<iostream>
using namespace std;

int main(){
    int* pointer = nullptr;
    int variable = 5;

    pointer = &variable;

    cout<<"the value of variable is: "<<variable<<endl;

    cout<<"the address value of variable: "<<&variable<<endl;

    cout<<"the value of pointer address is: "<<pointer<<endl;

    cout<<"the value address of pointer address is: "<<&pointer<<endl;

    return 0;

}