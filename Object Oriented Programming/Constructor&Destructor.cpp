#include<bits/stdc++.h>
using namespace std;

class Customer{
    public:
    // string name ;
    // int account_number ;
    // int balance ;


    // // Default constructor
    // Customer(){
    //     cout << "Constructor is called " ;
    // }

    // // Parameterized constructor
    // // Customer(string str , int a , int b){
    // //     name = str;
    // //     account_number = a;
    // //     balance = b;
    // // }
    // // constructor overloading
    // Customer(string name1 , int a){
    //     name = name1;
    //     account_number = a;

    // }

    // // Inline constructor 
    // inline Customer(string s , int a , int b) : name(s) , account_number(a) , balance(b){

    // }

    // // copy constructor 

    // Customer(Customer &B){
    //     name = B.name;
    //     account_number = B.account_number;
    //     balance = B.balance;
    // }

    // destructor
    string name ;
    int * balance;
    Customer(string name , int bal){
        this -> name = name ;
        balance = new int;
        *balance = bal;
    }
    ~Customer(){
        cout << name << endl;
        delete balance;
    }

    void display(){
        cout << name <<" "<<balance << endl;
    } 
};


int main(){

    // Customer obj ("Ritik" , 20003 , 200);
    // Customer obj1 ("Rishi" , 20004);
    // obj.display();
    // obj1.display();

    // Customer obj2(obj);
    // obj2.display();

    Customer obj1 ("Rishi" , 20004);
    // obj1.display();
    return 0;
}