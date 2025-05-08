#include<bits/stdc++.h>
using namespace std;

class Customer{
    // static data member start 

    // public:
    // string name ;
    // int account_number ;
    // int balance ;
    // static int total_Customer;

    // static data member end 

    // static function member start 

    string name ;
    int account_number ;
    int balance ;
    static int total_Customer;
    static int total_balance;
    public:

    Customer(string str , int a , int b){
        name = str;
        account_number = a;
        balance = b;
        total_Customer++;
        total_balance += balance;
    }
    void deposit(int amount){
        if(amount > 0)
            balance += amount;
            total_balance += amount;
    }
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            total_balance -= amount;
        }
    }
    static void acceStatic(){
        cout <<"Total number of customer : "<< total_Customer << endl;
    }
    static void showTotalBal(){
        cout <<"Total balance : "<< total_balance << endl;
    }
    void display(){
        cout << name <<" "<< account_number <<" "<<balance << endl;
    } 
};

int Customer :: total_Customer = 0;
int Customer :: total_balance = 0;
int main(){
    Customer obj ("Ritik" , 20003 , 200);
    // obj.display();
    Customer obj1 ("Rishi" , 20004 , 4000);
    obj.deposit(5000);
    obj1.withdraw(4000);
    Customer::acceStatic();
    Customer::showTotalBal();
    // cout << obj.total_Customer;
    return 0;
}