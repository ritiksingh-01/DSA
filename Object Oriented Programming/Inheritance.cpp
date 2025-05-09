#include<bits/stdc++.h>
using namespace std;

class Human{

    // string name;
    // int age , weight ;  not allowed

    // protected:
    //     string name;
    //     int age , weight ;  this is also not accessable outside the class

    public:
        string name;
        int age , weight ;  





    // private:
    //     int a;
    // protected:
    //     int b;
    // public: 
    //     int c;
    
    // void fun(){
    //     a = 10;
    //     b = 20;
    //     c = 30;
    // }
};

class Student : public Human{
    int roll_number , fee;

    public:
    void fun(string n , int a , int b){
        name = n;
        age = a;
        weight = b;
    }

    void display(){
        cout << name << " " << age << " " << weight << endl;
    }
};


int main(){

    Student A ;
    // A.name  = "Rishi";

    A.fun("rishi" , 34,58);
    A.display();

    // Human Rishi;
    // Rishi.c = 20;
    // Rishi.fun();

    return 0;
}