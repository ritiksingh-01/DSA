#include<bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name ;
    int account_number ;
    int balance ;
    static int total_Customer;

    Customer(string str , int a , int b){
        name = str;
        account_number = a;
        balance = b;
        total_Customer++;
    }
    void display(){
        cout << name <<" "<< account_number <<" "<<balance << endl;
    } 
};

int Customer :: total_Customer = 0;
int main(){
    Customer obj ("Ritik" , 20003 , 200);
    obj.display();
    Customer obj1 ("Rishi" , 20004 , 4000);
    
    cout << obj.total_Customer;
    return 0;
}