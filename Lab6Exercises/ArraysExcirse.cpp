#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int* y = nullptr;

    cout<<"How many numbers would you like to type? ";
    cin>> numberOfElements;

    dynamicArray = new int[numberOfElements];
    if(dynamicArray == nullptr){
        cout<<"Error: memory could not be allocated";
    }
    else{
        for (int i = 0; i<numberOfElements; i++){
            cout<<"Enter number: ";
            cin>>dynamicArray[i];

        }
        cout<<"You have enterd: ";
        for (int j = 0; j<numberOfElements; j++){
            cout<<dynamicArray[j] << ", ";

        }
        delete[] dynamicArray;

    }
    return 0;
}