#include<iostream>
using namespace std;


int main(){
    int num = 10;
    cout << num << endl; 

    // address of operator  -- &
    cout << "Address of num: " << &num << endl;

    int *ptr = &num;
    cout << "Value is : " << *ptr << endl;

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;

    int i = 5;
    int *p = 0;
    p = &i;
    cout << "Address is : " << p << endl;
    cout <<"Value is : " << *p << endl;

    int j = 5;
    cout << "Value before increment is : " << j << endl;
    int *q = &j;
    (*q)++;
    cout << "Value after increment is : " << j << endl;

    int *s = q;
    cout << q << " -  " << s << endl;
    cout << *q << " -  " << *s << endl;
    *s = *s + 1;
    cout << *s << endl;
    cout << s << endl;
    s = s + 1;
    cout << s << endl;
    return 0;
}