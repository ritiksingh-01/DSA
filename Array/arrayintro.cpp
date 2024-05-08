#include <iostream>
using namespace std ;
void printarray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] <<" ";
    }
}
void printarray2(char arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << endl << arr[i] <<" " ;
    }
}
int main (){
int arr[5] = {1,4,5,6,8};
printarray(arr , 2);


char ch[4] = { 'a' , 'b' , 'c' , 'd'};
printarray2(ch , 3);
    return 0;
}