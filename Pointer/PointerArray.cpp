#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,35,6};
    int *p = &arr[0];
    cout <<"1 : "<<*arr << endl;
    cout <<"2 : "<<*arr+1<< endl;
    cout <<"3 : "<<*(arr+2)<< endl;
    cout <<"4 : "<<*(arr)+2<< endl;
    cout <<"5 : " <<*(2+arr)<< endl;
    cout <<"6 : " <<2[arr]<< endl;
    cout <<"Size of array : " <<sizeof(arr)<< endl;
    cout <<"Size of array : " <<sizeof(*arr)<< endl;
    cout <<"Size of array : " <<sizeof(&arr)<< endl;
    cout <<"Size of pointer : " <<sizeof(p)<< endl;
    cout <<"Size of pointer : " <<sizeof(*p)<< endl;
    cout <<"Size of pointer : " <<sizeof(&p)<< endl;
    

   int arr[10];
   int *ptr = &arr[0];
   cout << ptr << endl;
   ptr = ptr +1;
   cout << ptr << endl;

    return 0;
}