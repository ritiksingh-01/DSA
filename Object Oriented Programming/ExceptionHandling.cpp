#include<bits/stdc++.h>
using namespace std;

// class Customer{

//     int balance , account_number ;
//     string name;


//     public : 

//     Customer(string name , int balance , int account_number){
//         this -> name = name ;
//         this -> balance = balance ;
//         this -> account_number = account_number;
//     }

//     void deposit(int amount){
//         if(amount > 0){
//             balance += amount ;
//             cout << amount << " rs is credited successfully!!"<< endl;
//         }else{
//             throw "amount should be greater then zero" ;
//         }
//     }

//     void withdraw(int amount){
//         if(amount > 0 && amount <= balance){
//         balance -= amount;
//         cout << amount << " rs is debited successfully.." << endl;
//         }else {
//             throw "Your balance is low" ;
//         }
//     }
// };


int main(){

    // Customer C1 ("Ritik" ,500 , 102);

    // try{
    // C1.deposit(100);
    // C1.withdraw(6000);
    // }catch (const char *e){
    //     cout << "Exception occured: " << e << endl;
    // }

    // int a = 4 , b =0;
    // try{
    //     if(b==0)
    //     throw "Divide by 0 is not possible";
    //     int c = a / b;
    //     cout << c << endl;
    // }catch (const char *e){
    //     cout << "Exception occured: " << e << endl;
    // }

    try {
    int *p = new int[1000000000000000] ;
    cout << "Memory allocation is successfully" << endl;
    delete []p;
    } catch (const bad_alloc &e){
        cout << "Exception Occured: " << e.what()<< endl;
    }
    catch(...){ //default catch block 
        cout << "Exception Occured " << endl;
    }

    return 0;
}