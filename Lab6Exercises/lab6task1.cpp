#include <iostream>
#include <string>
using namespace std;
int main(){
    int var;
    string mstring;
    int *p = nullptr;
 string *h = nullptr;
 //prompting user to enter integer value
 
    cout << "enter an integer var:  ";
     cin >> var;
   p = new int;
   *p = var;
cout << "dynamically allocated integer is: " << *p << endl;
delete p;

   //prompting user to enter string dynamically
    cout << "enter a mystring ";
    cin >> mstring;
   
     h = new string;
     cout << *h;
      *h = mstring;
     cout << "dynamically allocated string is: " << *h;
    
delete h;
return 0;
}
