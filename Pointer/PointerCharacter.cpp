#include<iostream>
using namespace std;


int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] ="ritik";
    cout << arr << endl;
    cout <<"Character array : "<< ch << endl;

    char * c = &ch[0];
    cout <<"Pointer character array : "<< c << endl;
    cout << *c << endl;
    cout << *ch << endl;
    cout << &ch << endl;
    cout << &c << endl;

    char temp = 'r';
    char *p = &temp;
    cout << p << endl;
    return 0;
}