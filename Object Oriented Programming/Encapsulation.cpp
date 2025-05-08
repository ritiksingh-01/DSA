#include<bits/stdc++.h>
using namespace std;

class Customer{

    string name ;
    int account_number ;
    int balance ;
    int age;
    public:

    Customer(string str , int a , int b,int c){
        this -> name = str;
        this -> account_number = a;
        this -> balance = b;
        this -> age = c;
    }
    void updateAge(int a){
        if(a > 0 && a < 100){
            this -> age = a ;
        }
        else {
            cout << "Invalid age" << endl;
        }
    }
    void deposit(int amount){
        if(amount > 0)
            balance += amount;
        else 
            cout << "Invid amount" << endl;
    }
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
    }
    void display(){
        cout << name <<" "<< account_number <<" "<< balance <<" "<< age << endl;
    } 
};
int main(){
    Customer obj ("Ritik" , 20003 , 200,20);
    Customer obj1 ("Rishi" , 20004 , 4000,20);
    obj.deposit(-10);
    obj.updateAge(-10);
    obj.display();

    return 0;
}