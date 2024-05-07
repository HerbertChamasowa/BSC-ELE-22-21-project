#include<iostream>
#include<limits>
using namespace std;
int main(){

    int x;
    cout <<"Enter an integer value between value 5 and 10" << endl;
    cin>>x;
        while(cin.fail() || x < 5 || x > 10){
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid input. Please an integer between value between 1 and 10: ";
        cin>>x;

        
    
    }
    cout<<"your input value" << "("<< x <<")"<<"has been accepted"<<endl;
    return 0;
}

