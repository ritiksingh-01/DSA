#include<iostream>
using namespace std;

int gcd(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a= a-b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}

int main(){
    int a , b;
    cout << "Enter the value of a and b : " ;
    cin >> a >> b;
    cout << endl <<"Gcd of "<< a << " and " << b << " is " << gcd(a , b) ;
}