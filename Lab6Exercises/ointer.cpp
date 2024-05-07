#include<iostream>
#include<string>
using namespace std;
int main(){
    int count = 5;
    short status = 2;
    char letter ='A';
    string s = "ABC";

    int* pCount = &count;
    short* pStatus = &status;
    char* pLetter = &letter;
    string* pString = &s;

    return 0;


}