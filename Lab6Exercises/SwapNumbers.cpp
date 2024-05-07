#include <iostream>

using namespace std;

void SwapNumbers(int &var1, int &var2){
    int tempVar = var1;
    var1 = var2;
    var2 = tempVar;
}

// function declaration

int main () {

// local variable declaration:
int varA = 25;
int varB= 100;

cout << "Before swap, value of varA :" <<varA << endl;
cout << "Before swap, value of varB :" << varB << endl;

/* calling a function to swap the values.*/
SwapNumbers(varA, varB);
cout << "After swap, value of varA :" << varA << endl;
cout << "After swap, value of varB :" << varB << endl;
return 0;
}
