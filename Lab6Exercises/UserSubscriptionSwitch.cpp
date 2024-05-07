#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x = time(0);
    srand(x);
    int daysUntilExpiration = rand() % 12;

    switch(daysUntilExpiration){
        case 0:
            cout<<"your subscription had expired"<<endl;
            break;
        case 1:
            cout<<"your subscription expires within a day! Renew now and save 20%"<<endl;
            break;
        case 2:
            cout<<"your subscription will expire soon in "<<daysUntilExpiration<< " days."<<endl<<" Renew now and save 10%"<<endl;
            break;
        case 3:
            cout<<"your subscription will expire soon in "<<daysUntilExpiration<< " days."<<endl<<" Renew now and save 10%"<<endl;
            break;
        case 4:
            cout<<"your subscription will expire soon in "<<daysUntilExpiration<< " days."<<endl<<" Renew now and save 10%"<<endl;
            break;
        case 5:
            cout<<"your subscription will expire soon in "<<daysUntilExpiration<< " days."<<endl<<" Renew now and save 10%"<<endl;
            break;    
        case 6:
            cout<<"your subscription will expire soon. Renew now"<<endl;
            break;
        case 7:
            cout<<"your subscription will expire soon. Renew now"<<endl;
            break;
        case 8:
            cout<<"your subscription will expire soon. Renew now"<<endl;
            break;
        case 9:
            cout<<"your subscription will expire soon. Renew now"<<endl;
            break;
        case 10:
            cout<<"your subscription will expire soon. Renew now"<<endl;
            break;
        default:
            cout<<"you have an active subscription"<<endl;



    }
    return 0;
}