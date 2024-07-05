#include<iostream>
using namespace std;


int sc = 30;  // global varaible


void a(int& i ){
    cout <<"In a : " <<sc << endl;
    ++sc;
    cout <<"In a : " <<i << endl;
}
void b (int& i){
    cout <<"In b : " << sc << endl;
    cout <<"In b : " <<i << endl;
}

int main(){

    int i = 10;  // local variable
    a(i);
    b(i);
    cout << "In main : " << i << endl;
    cout << "In main : " << sc << endl;
    return 0;
}