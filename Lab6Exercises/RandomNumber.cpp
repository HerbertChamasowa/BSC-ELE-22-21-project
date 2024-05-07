#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x = time(0);
    srand(x);
    int daysUntilExpiration = rand() % 12;
    
    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5){
        cout<<"your subscription will expire soon.Renew now"<<endl;

    }
    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1 ){
        cout<<"your subscription will expire soon in value of daysuntilExpiration. Renew now and save 10% soon"<<endl;
    }
    else if (daysUntilExpiration = 1){
        cout<<"your subscription expires within a day. Renew now and save 20%"<<endl;

    }
    else if(daysUntilExpiration > 10){
        cout<<"your subscription has expired"<<endl;
    }
    else if(daysUntilExpiration == 0){
    cout<<"you have an active subscription"<<endl;
    }
    return 0;

}