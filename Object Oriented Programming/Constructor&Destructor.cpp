#include<bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name ;
    int account_number ;
    int balance ;


    // Default constructor
    Customer(){
        cout << "Constructor is called " ;
    }

    // Parameterized constructor
    Customer(string str , int a , int b){
        name = str;
        account_number = a;
        balance = b;
    }
};


int main(){

    Customer obj ("Ritik" , 200034 , 200);

    cout << obj.name << endl;
    return 0;
}